/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include "my.h"
#include <stdio.h>

int main(void)
{
    int nb = 42;
    my_printf("%%%c%d%s\n", 'c', -2147483648, "test");
    my_printf("u : %u.\n", 4204206969);
    my_printf("o : %o.\n", 10000);
    my_printf("b : %b.\n", 10000);
    printf("p : %p.\n", &nb);
    my_printf("x : %p.\n", &nb);
    my_printf("x : %x.\n", 10);
    my_printf("X : %X.\n", 17);
    my_printf("S :%S\n", "\n");
    my_printf("C : %C\n", 'C');
    my_printf("f : %F.\n", -300.9999999);
    my_printf("a : %a.\n", 3.000450189);
    my_printf("A : %A.\n", 3.000450789);
    my_printf("e : %e.\n", -123.45678);
    my_printf("E : %E.\n", 0.0123456789);
    my_printf("g : %g.\n", 1.234);
    my_printf("-g : %g.\n", -123.456789);
    my_printf("g : %g.\n", 1234000.45678);
    return 0;
}
