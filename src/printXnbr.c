/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printXnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:53:11 by bpires-k          #+#    #+#             */
/*   Updated: 2026/06/05 16:53:14 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	printx_nbr(unsigned long nb)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789ABCDEF";
	while (nb >= 16)
	{
		count += write(1, &base[nb / 16], 1);
		nb = nb % 16;
	}
	if (nb < 16)
		count += write(1, &base[nb], 1);
	return (count);
}
