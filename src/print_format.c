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

#include "ft_print.h"

int	print_format(const char *format, va_list args)
{
	int	count;

	count = 0;
	if (!args)
		return (0);
	else if (format == "c")
		return write(1, &va_arg(args, char), 1);
	else if (format == 's')
		return write(1, &va_arg(args, char *), ft_strlen(args));
	elseif (*format == 'i' || *format == 'd')
		return printnbr(va_arg(args, int));
	else if (format == '%')
		return write(1, format, 1);
	else if (format == 'u')
		return printnbr(va_arg(args, unsigned int));
	else if (*format == 'x')
		return printxnbr(va_arg(args, int));
	else if (*format == 'X')
		return printXnbr(va_arg(args, int));
	// elseif (*format == 'p')
	else
	{
		write(1, format, 1);
		return (write(1, format, 1) + 1);
	}
}
