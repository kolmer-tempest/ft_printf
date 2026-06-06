/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:15:53 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/27 20:15:55 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int	print_format(const char *format, va_list args)
{
	char	*str;

	if (!args)
		return (0);
	else if (*format == 'c')
		return (ft_write(va_arg(args, char *), 1));
	else if (*format == 's')
	{
		str = va_arg(args, char *);
		return (ft_write(str, ft_strlen(str) - 1));
	}
	else if (*format == 'i' || *format == 'd')
		return (printnbr(va_arg(args, int)));
	else if (*format == '%')
		return (write(1, format, 1));
	else if (*format == 'u')
		return (printnbr(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (printxnbr(va_arg(args, unsigned long)));
	else if (*format == 'X')
		return (printx_nbr(va_arg(args, unsigned long)));
	else if (*format == 'p')
		return (printxnbr(va_arg(args, unsigned long)));
	return (write(1, format, 1) + 1);
}
