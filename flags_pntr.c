/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** flags_pntr
*/

#include "includes/my.h"

int flag_pntr(va_list param)
{
    my_printf("%s", "0x");
    flag_unsigned_int_hexa_sml(param);
    return 14;
}
