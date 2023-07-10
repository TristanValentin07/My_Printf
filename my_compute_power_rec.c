/*
** EPITECH PROJECT, 2022
** my compute power recursive
** File description:
** this file has for purpose to compute and
** return nb^p in a recursive function
*/

long long my_compute_power_rec(int nb, int p)
{
    long long int n;
    if (p < 0) {
        return 0;
    }
    if (p == 0) {
        return 1;
    }
    if (p == 1) {
        return nb;
    }
    n = nb * my_compute_power_rec(nb, p - 1);
    return n;
}
