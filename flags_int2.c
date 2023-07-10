/*
** EPITECH PROJECT, 2022
** int flags
** File description:
** flags for my_printf
*/

#include "includes/my.h"

int my_put_binary(int nb)
{
    int i = 0;
    int len = 0;

    if (nb >= 0) {
        if (nb >= 2) {
            i = (nb % 2);
            nb = nb / 2;
            len += my_put_binary(nb);
            my_putchar('0' + i);
        } else {
            my_putchar('0' + nb % 2);
        }
        len++;
    }
    return len;
}

int flag_unsigned_int_binary(va_list param)
{
    unsigned int nb = va_arg(param, int);
    unsigned int i = 0;
    int len = 0;

    if (nb >= 2) {
        i = (nb % 2);
        nb = nb / 2;
        len += my_put_binary(nb);
        my_putchar('0' + i);
    } else
        my_putchar('0' + nb % 2);
    len++;
    return len;
}

int my_put_hexa_sml(unsigned long long int nb)
{
    unsigned long long int i = 0;
    int len = 0;

    i = (nb % 16);
    if (nb >= 16) {
        nb = nb / 16;
        len += my_put_hexa_sml(nb);
    }
    if (i <= 9) {
        my_putchar('0' + i);
    } else
        my_putchar('a' + i - 10);
    len++;
    return len;
}

int flag_unsigned_int_hexa_sml(va_list param)
{
    unsigned long long int nb = va_arg(param, long long int);
    unsigned long long int i = 0;
    int len = 0;

    i = nb % 16;
    if (nb >= 16) {
        nb = nb / 16;
        len += my_put_hexa_sml(nb);
    }
    if (i <= 9) {
        my_putchar('0' + i);
    } else
        my_putchar('a' + i - 10);
    len++;
    return len;
}
