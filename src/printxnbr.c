/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printxnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:57:29 by bpires-k          #+#    #+#             */
/*   Updated: 2026/06/06 16:40:35 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	printxnbr(unsigned int nb)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
		count += printxnbr(nb / 16);
	count += ft_putchar(base[nb % 16]);
	return (count);
}
