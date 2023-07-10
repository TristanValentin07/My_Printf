/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** mini_printf
*/

#include "includes/my.h"

int my_printf(const char *format, ...)
{
    va_list param;
    int count;

    va_start(param, format);
    count = choose_format(format, param);
    va_end(param);
    return count;
}

int good_nbflag(char const *format, char *array, int i, va_list param)
{
    for (int a = 0; a < 20; a++) {
        if (format[i] == array[a])
            return (*(callflag[a]))(param);
    }
}

int read_format(char const *format, char *array, va_list param)
{
    int count = 0;

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            count += good_nbflag(format, array, i, param);
        } else {
            my_putchar(format[i]);
            count++;
        }
    }
    return count;
}
