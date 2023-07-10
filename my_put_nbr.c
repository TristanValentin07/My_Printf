/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_put_nbr
*/

#include "includes/my.h"

void my_putchar(char c);

int my_put_nbr(int nb)
{
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 0) {
        if (nb >= 10) {
            i = (nb % 10);
            nb = (nb - i) / 10;
            my_put_nbr(nb);
            my_putchar('0' + i);
        } else
            my_putchar('0' + nb % 10);
    }
    return (nb);
}
