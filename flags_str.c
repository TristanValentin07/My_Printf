/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** flags
*/
#include "includes/my.h"

int my_put_octal(int nb);

int flag_str(va_list param)
{
    char *str = va_arg(param, char *);

    my_putstr(str);
    return my_strlen(str);
}

int flag_str_big(va_list param)
{
    char *str = va_arg(param, char *);
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 31 && str[i] < 127) {
            my_putchar(str[i]);
            count++;
        } else {
            my_putchar('\\');
            count += my_put_octal(str[i]) + 1;
        }
    }
    return count;
}
