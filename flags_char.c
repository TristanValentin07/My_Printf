/*
** EPITECH PROJECT, 2022
** char flags
** File description:
** flags for my_printf
*/
#include "includes/my.h"

int flag_char(va_list param)
{
    my_putchar(va_arg(param, int));
    return 1;
}

int flag_pourcent(va_list param)
{
    my_putchar('%');
    return 1;
}
