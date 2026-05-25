/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bkolmer@outlook.pt>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:44:33 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/25 11:44:35 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

static int	print_format(const char *format, va_list args)
{
	if (*format == 'c')
		return write(1, &va_arg(args, char), 1);
	else if (*format == 's')
		return write(1, &va_arg(args, char *), ft_strlen(va_arg(args, char *)));
	// elseif (*format == 'i' || *format == 'd')
	// 	ft_putnbr_fd(va_arg(args, int), 1);
	else if (*format == '%')
		return write(1, format, 1);
	else if (*format == 'u')
		ft_putnbr_fd(va_arg(args, unsigned int), 1);
	// elseif (*format == 'x')
	// elseif (*format == 'X')
	// elseif (*format == 'p')
	else
	{
		write(1, format, 1);
		return (write(1, format, 1) + 1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (format)
	{
		if (*format == '%')
			count += print_format(++format, args);
		else
			count += write(1, format, 1);
		format++;
	}
}

int main()
{
	ft_printf("bruv %s", "keke");
	printf("\nbruv %s\n", "keke");
	return (0);
}
