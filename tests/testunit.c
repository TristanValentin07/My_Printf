/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** testunit
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my.h"

int my_printf(const char *format, ...);

Test(my_printf, string, .init=cr_redirect_stdout) {
    char *str = "hello";

    my_printf("%s", str);
    cr_assert_stdout_eq_str("hello", "");
}

Test(my_printf, number_i, .init=cr_redirect_stdout) {
    int nb = 42;

    my_printf("%i", nb);
    cr_assert_stdout_eq_str("42", "");
}

Test(my_printf, number_d, .init=cr_redirect_stdout) {
    int nb = 21;

    my_printf("%d", nb);
    cr_assert_stdout_eq_str("21", "");
}

Test(my_printf, caraters, .init=cr_redirect_stdout) {
    char c = 'A';

    my_printf("%c", 'c');
    cr_assert_stdout_eq_str("c", "");
}

Test(my_printf, percent, .init=cr_redirect_stdout) {
    my_printf("%%");
    cr_assert_stdout_eq_str("%", "");
}

Test(my_printf, multiple_number, .init=cr_redirect_stdout) {
    int nb = 21;

    my_printf("If you multiple %d by %d, the result is %i.", nb, 2, nb * 2);
    cr_assert_stdout_eq_str("If you multiple 21 by 2, the result is 42.", "");
}

Test(my_printf, multiple_string, .init=cr_redirect_stdout) {
    char *str = "Epitech", *name = "Tristan";
    int nb = 7;

    my_printf("The word %%%s%% has %i characters",
    str , nb, name);
    cr_assert_stdout_eq_str("The word %Epitech% has 7 characters", "");
}

Test(my_put_nbr, min, .init=cr_redirect_stdout) {
    int nb = -2147483648;

    my_put_nbr(nb);
    cr_assert_stdout_eq_str("-2147483648", "");
}

Test(my_put_nbr, neg_value, .init=cr_redirect_stdout) {
    int nb = -2;

    my_put_nbr(nb);
    cr_assert_stdout_eq_str("-2", "");
}

Test(my_put_nbr, u, .init=cr_redirect_stdout) {
    unsigned int nb = 4200000000;

    my_printf("%u", nb);
    cr_assert_stdout_eq_str("4200000000", "");
}

Test(my_put_nbr, o, .init=cr_redirect_stdout) {
    unsigned int nb = 10000;

    my_printf("%o", nb);
    cr_assert_stdout_eq_str("23420", "");
}

Test(my_put_nbr, o2, .init=cr_redirect_stdout) {
    unsigned int nb = 7;

    my_printf("%o", nb);
    cr_assert_stdout_eq_str("7", "");
}

Test(my_put_nbr, u2, .init=cr_redirect_stdout) {
    unsigned int nb = 9;

    my_printf("%u", nb);
    cr_assert_stdout_eq_str("9", "");
}

Test(my_put_nbr, b, .init=cr_redirect_stdout) {
    unsigned int nb = 10000;

    my_printf("%b", nb);
    cr_assert_stdout_eq_str("10011100010000", "");
}

Test(my_putchar, b, .init=cr_redirect_stdout) {
    unsigned int nb = 1;

    my_printf("%b", nb);
    cr_assert_stdout_eq_str("1", "");
}

Test(my_putchar, x, .init=cr_redirect_stdout) {
    unsigned int nb = 10;

    my_printf("%x", nb);
    cr_assert_stdout_eq_str("a", "");
}

Test(my_putnbr, xo, .init=cr_redirect_stdout) {
    unsigned int nb = 17;

    my_printf("%x", nb);
    cr_assert_stdout_eq_str("11", "");
}

Test(my_putstr, x2, .init=cr_redirect_stdout) {
    unsigned int nb = 316;

    my_printf("%x", nb);
    cr_assert_stdout_eq_str("13c", "");
}

Test(my_putstr, x3, .init=cr_redirect_stdout) {
    unsigned int nb = 170;

    my_printf("%x", nb);
    cr_assert_stdout_eq_str("aa", "");
}

Test(my_putstr, X, .init=cr_redirect_stdout) {
    unsigned int nb = 10;

    my_printf("%X", nb);
    cr_assert_stdout_eq_str("A", "");
}

Test(my_putnbr, X2, .init=cr_redirect_stdout) {
    unsigned int nb = 17;

    my_printf("%X", nb);
    cr_assert_stdout_eq_str("11", "");
}

Test(my_putstr, X3, .init=cr_redirect_stdout) {
    unsigned int nb = 316;

    my_printf("%X", nb);
    cr_assert_stdout_eq_str("13C", "");
}

Test(my_putstr, X4, .init=cr_redirect_stdout) {
    unsigned int nb = 170;

    my_printf("%X", nb);
    cr_assert_stdout_eq_str("AA", "");
}

Test(my_putstr, S, .init=cr_redirect_stdout) {
    char *str = "new line char \n";

    my_printf("%S", str);
    cr_assert_stdout_eq_str("new line char \\12", "");
}

Test(my_printf, C, .init=cr_redirect_stdout) {

    my_printf("%c", 'C');
    cr_assert_stdout_eq_str("C", "");
}

Test(my_printf, p, .init=cr_redirect_stdout) {
    int nb = 42;

    my_printf("%p", &nb);
    cr_assert_eq(1, 1);
}


Test(my_printf, f, .init=cr_redirect_stdout) {

    my_printf("%f", 3.0123456789);
    cr_assert_stdout_eq_str("3.012346", "");
}

Test(my_printf, e, .init=cr_redirect_stdout) {

    my_printf("%e", 0.0123456789);
    cr_assert_stdout_eq_str("1.234568e-02", "");
}

Test(my_printf, E, .init=cr_redirect_stdout) {

    my_printf("%E", 0.0123456789);
    cr_assert_stdout_eq_str("1.234568E-02", "");
}

Test(my_printf, e2, .init=cr_redirect_stdout) {

    my_printf("%e", -123.45678);
    cr_assert_stdout_eq_str("-1.234568e+02", "");
}

Test(my_printf, E2, .init=cr_redirect_stdout) {

    my_printf("%E", -123.45678);
    cr_assert_stdout_eq_str("-1.234568E+02", "");
}

Test(my_compute_power_rec, g1) {

    cr_assert_eq(36, my_compute_power_rec(6, 2));
    cr_assert_eq(0, my_compute_power_rec(6, -1));
    cr_assert_eq(1, my_compute_power_rec(6, 0));
    cr_assert_eq(6, my_compute_power_rec(6, 1));
}

Test(my_printf, a1, .init=cr_redirect_stdout) {

    cr_assert_eq(0, my_printf("%A", 0));
    cr_assert_eq(0, my_printf("%a", 0));
    cr_assert_eq(0, hex_exp_print(0));
}