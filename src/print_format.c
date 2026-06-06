/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 20:15:53 by bpires-k          #+#    #+#             */
/*   Updated: 2026/06/06 16:59:54 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	print_format(const char *format, va_list args)
{
	if (!args)
		return (0);
	else if (*format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*format == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*format == 'i' || *format == 'd')
		return (printnbr(va_arg(args, int)));
	else if (*format == '%')
		return (write(1, format, 1));
	else if (*format == 'u')
		return (printunbr(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (printxnbr(va_arg(args, unsigned int)));
	else if (*format == 'X')
		return (printx_nbr(va_arg(args, unsigned int)));
	else if (*format == 'p')
		return (printptr(va_arg(args, void *)));
	return (write(1, format, 1) + 1);
}
