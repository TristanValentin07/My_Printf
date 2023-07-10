/*
** EPITECH PROJECT, 2022
** int flags
** File description:
** flags for my_printf
*/
#include "includes/my.h"

int my_put_hexa_big(int nb)
{
    int i = 0;
    int len = 0;

    i = (nb % 16);
    if (nb >= 16) {
        nb = nb / 16;
        len += my_put_hexa_big(nb);
    }
    if (i <= 9) {
        my_putchar('0' + i);
    } else
        my_putchar('A' + i - 10);
    len++;
    return len;
}

int flag_unsigned_int_hexa_big(va_list param)
{
    unsigned int nb = va_arg(param, int);
    unsigned int i = 0;
    int len = 0;

    i = nb % 16;
    if (nb >= 16) {
        nb = nb / 16;
        len += my_put_hexa_big(nb);
    }
    if (i <= 9) {
        my_putchar('0' + i);
    } else
        my_putchar('A' + i - 10);
    len++;
    return len;
}
