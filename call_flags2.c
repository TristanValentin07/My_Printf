/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** call_flags2
*/

#include "includes/my.h"
call_t callflag[20];

int choose_format2(const char *format, va_list param, char *array)
{
    callflag[17] = &flag_f_exp_sml;
    callflag[18] = &flag_f_exp_big;
    callflag[19] = &flag_g;
    return read_format(format, array, param);
}

int choose_format(const char *format, va_list param)
{
    char array[20] = {'d', 'c', 'i', 's', '%', 'u', 'o', 'b', 'X', 'x', 'S',
                        'C', 'p', 'f', 'F', 'a', 'A', 'e', 'E', 'g'};
    callflag[0] = &flag_int_decimal;
    callflag[1] = &flag_char;
    callflag[2] = &flag_int_decimal;
    callflag[3] = &flag_str;
    callflag[4] = &flag_pourcent;
    callflag[5] = &flag_unsigned_int_decimal;
    callflag[6] = &flag_unsigned_int_octal;
    callflag[7] = &flag_unsigned_int_binary;
    callflag[8] = &flag_unsigned_int_hexa_big;
    callflag[9] = &flag_unsigned_int_hexa_sml;
    callflag[10] = &flag_str_big;
    callflag[11] = &flag_char;
    callflag[12] = &flag_pntr;
    callflag[13] = &flag_f;
    callflag[14] = &flag_f;
    callflag[15] = &flag_f_hex_sml;
    callflag[16] = &flag_f_hex_big;
    return choose_format2(format, param, array);
}
