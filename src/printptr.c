/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 15:35:44 by bpires-k          #+#    #+#             */
/*   Updated: 2026/06/06 17:44:49 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	printxnbr_p(uintptr_t p)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (p >= 16)
		count += printxnbr_p(p / 16);
	count += write(1, &base[p % 16], 1);
	return (count);
}

int	printptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += printxnbr_p((uintptr_t)ptr);
	return (count);
}
