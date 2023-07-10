/*
** EPITECH PROJECT, 2022
** int flags
** File description:
** flags for my_printf
*/
#include "includes/my.h"

int flag_int_decimal(va_list param)
{
    int nb = va_arg(param, int);
    int len = 1;

    my_put_nbr(nb);
    while (nb >= 10) {
        nb /= 10;
        len++;
    }
    return len;
}

int flag_unsigned_int_decimal(va_list param)
{
    unsigned int nb = va_arg(param, int);
    unsigned int i = 0;
    int len = 0;

    if (nb >= 10) {
        i = (nb % 10);
        nb = (nb - i) / 10;
        len += my_printf("%d", nb) + 1;
        my_putchar('0' + i);
    } else {
        my_putchar('0' + nb % 10);
        len++;
    }
    return len;
}

int my_put_octal(int nb)
{
    int len = 0;
    int i = 0;

    if (nb >= 0) {
        if (nb >= 8) {
            i = (nb % 8);
            nb = nb / 8;
            len += my_put_octal(nb);
            my_putchar('0' + i);
        } else {
            my_putchar('0' + nb % 8);
        }
        len++;
    }
    return len;
}

int flag_unsigned_int_octal(va_list param)
{
    unsigned int nb = va_arg(param, int);
    unsigned int i = 0;
    int len = 0;

    if (nb >= 8) {
        i = (nb % 8);
        nb = nb / 8;
        len += my_put_octal(nb);
        my_putchar('0' + i);
    } else {
        my_putchar('0' + nb % 8);
    }
    len++;
    return len;
}
