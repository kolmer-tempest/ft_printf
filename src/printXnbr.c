/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printXnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:53:11 by bpires-k          #+#    #+#             */
/*   Updated: 2026/06/06 16:42:04 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	printx_nbr(unsigned int nb)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
		count += printx_nbr(nb / 16);
	count += ft_putchar(base[nb % 16]);
	return (count);
}
