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

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			count += print_format(format++, args);
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
