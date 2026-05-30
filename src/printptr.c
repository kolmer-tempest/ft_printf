#include "../include/ft_printf.h"

int printptr(void *ptr)
{
    if (!ptr)
        return (0);
    else
        return (printxnbr((unsigned int)ptr));
}