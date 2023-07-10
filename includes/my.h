/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#ifndef MY_H_
    #define MY_H_
    #define ABS(value) ((value) < 0 ? (-value) : (value))

typedef int (*call_t)(va_list param);
extern call_t callflag[20];

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
int my_strlen(char const *str);
int my_strcmp(const char *str1, char *str2);
long long my_compute_power_rec(int nb, int p);

int my_printf(const char *format, ...);
int choose_format(const char *format, va_list param);
int good_nbflag(char const *format, char *array, int i, va_list param);
int if_flag(char const *format, char *array, va_list param, int i);
int read_format(char const *format, char *array, va_list param);
void call_flags2(const char *format, va_list param);

int flag_int_decimal(va_list param);
int flag_char(va_list param);
int flag_str(va_list param);
int flag_pourcent(va_list param);
int flag_unsigned_int_decimal(va_list param);
int flag_unsigned_int_octal(va_list param);
int flag_unsigned_int_hexa_sml(va_list param);
int flag_unsigned_int_hexa_big(va_list param);
int flag_unsigned_int_binary(va_list param);
int flag_str_big(va_list param);
int flag_pntr(va_list param);
int flag_unsigned_int_hexa_pntr(va_list param);
int flag_f(va_list param);
int flag_f_hex_sml(va_list param);
int flag_f_hex_big(va_list param);
int flag_f_exp_sml(va_list param);
int flag_f_exp_big(va_list param);
int flag_g(va_list param);
int flag_g_f(double nb, int exponent);
int flag_g_e(double nb, int exponent);
int exp_print_big(int e);
int exp_print_sml(int e);
int hex_exp_print(int exponent);


int my_put_binary(int nb);
int my_put_hexa_sml(unsigned long long int nb);
int my_put_hexa_big(int nb);
int my_put_hexa_pntr(unsigned long long int nb);

#endif /* !MY_H_ */
