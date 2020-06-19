/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** fct that returns a nb, sent to the fct as a string
*/

int is_negative(int neg)
{
    if (neg == 0)
        return (1);
    else
        return (0);
}

int result(int nb, int neg)
{
    if (neg == 1)
        return (-nb);
    else
        return (nb);
}

int my_getnbr(char const *str)
{
    int neg = 0;
    int nb = 0;
    int i = 0;

    for (; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            neg = is_negative(neg);
    }
    for (; str[i] >= '0' && str[i] <= '9' && str[i] != '\0'; i++) {
        nb = nb * 10;
        nb = nb + (str[i] - 48);
        if (nb < 0)
            return (0);
    }
    return (result(nb, neg));
}
