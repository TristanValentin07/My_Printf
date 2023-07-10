/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** flags_float
*/

#include "includes/my.h"

int flag_f(va_list param)
{
    double nb = va_arg(param, double);
    long long tmp;
    int len = 0;
    if (nb < 0)
        len += my_printf("-");
    nb = ABS(nb) * 10000000;
    if ((long long)nb % 10 >= 5)
        nb += 10.0;
    len += my_printf("%d.", (long long)nb / 10000000);
    nb = ((nb / 10000000) - (long long)(nb / 10000000)) * 1000000;
    tmp = (long long)nb;
    for (int i = 0; i < 6; i ++) {
        if (tmp == 0) {
            len += my_printf("0");
        }
        tmp /= 10;
    }
    if ((long long)nb != 0)
        len += my_printf("%d", (long long)nb);
    return len;
}

int flag_g(va_list param)
{
    double nb = va_arg(param, double);
    int exponent = 0;
    double tmp = nb;

    if (ABS(nb) < 1) {
        for (int i = 0; nb != 0.0 && ABS(nb) < 1; i++) {
            nb *= 10;
            exponent--;
        }
    } else {
        for (int i = 0; ABS(nb) > 10; i++) {
            nb /= 10;
            exponent++;
        }
    }
    if (exponent < 6 && exponent > -4) {
        flag_g_f(tmp, exponent);
    } else {
        flag_g_e(nb, exponent);
    }
}

int flag_g_f(double nb, int exp)
{
    long long tmp;
    if (nb < 0)
        my_printf("-");
    nb = ABS(nb) * 10000000;
    if (ABS((long long)nb) % 10 >= 5)
        nb += 10.0;
    my_printf("%d.", (long long)nb / 10000000);
    nb = ((nb / 10000000) - (long long)(nb / 10000000));
    nb *= my_compute_power_rec(10, ((exp) > 0 ? (5 - exp) : 5));
    tmp = (long long)nb;
    for (int i = 0; i < ((exp) > 0 ? (5 - exp) : 5); i ++) {
        if (tmp == 0)
            my_printf("0");
        tmp /= 10;
    }
    while ((long long)nb % 10 == 0 && nb != 0)
        nb = (long long)nb / 10;
    if ((long long)nb != 0)
        my_printf("%d", (long long)nb);
    return 0;
}

int flag_g_e(double nb, int exponent)
{
    if (nb < 0)
        my_printf("-");
    my_printf("%g", nb);
    exp_print_sml(exponent);
    return 0;
}
