#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_printf(const char *format, ...);
int	print_format(const char *format, ...);

#endif