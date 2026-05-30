#include "../include/ft_printf.h"

int printXnbr(unsigned int nb)
{
    char    *base;
    int     count;

    count = 0;
    base = "0123456789ABCDEF";
    while (nb >= 16)
    {
        count += write(1,&base[nb / 16], 1);
        nb = nb % 16;
    }
    if (nb < 16)
        count += write(1, &base[nb], 1);
    return (count); 
}