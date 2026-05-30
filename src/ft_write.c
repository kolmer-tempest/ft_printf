#include "../include/ft_printf.h"

int ft_write(char *str, int slen)
{
    return (write(1, &str, slen));
}