/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** flags_float2
*/

#include "includes/my.h"

int exp_print_sml(int e)
{
    if (e < 0)
        my_putstr("e-");
    else
        my_putstr("e+");
    if (ABS(e) < 10)
        my_putchar('0');
    my_put_nbr(ABS(e));
    return 4;
}

int flag_f_exp_sml(va_list param)
{
    int e = 0;
    int len = 0;
    double nb = va_arg(param, double);
    if (ABS(nb) < 1) {
        for (int i = 0; nb != 0.0 && ABS(nb) < 1; i++) {
            nb *= 10;
            e--;
        }
    } else {
        for (int i = 0; ABS(nb) > 10; i++) {
            nb /= 10;
            e++;
        }
    }
    len += my_printf("%f", nb) + exp_print_sml(e);
    return len;
}

int exp_print_big(int e)
{
    if (e < 0)
        my_putstr("E-");
    else
        my_putstr("E+");
    if (ABS(e) < 10)
        my_putchar('0');
    my_put_nbr(ABS(e));
    return 4;
}

int flag_f_exp_big(va_list param)
{
    int e = 0;
    int len = 0;
    double nb = va_arg(param, double);
    if (ABS(nb) < 1) {
        for (int i = 0; nb != 0.0 && ABS(nb) < 1; i++) {
            nb *= 10;
            e--;
        }
    } else {
        for (int i = 0; ABS(nb) > 10; i++) {
            nb /= 10;
            e++;
        }
    }
    len += my_printf("%f", nb) + exp_print_big(e);
    return len;
}
