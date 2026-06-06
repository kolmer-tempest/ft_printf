/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:49:49 by bpires-k          #+#    #+#             */
/*   Updated: 2026/06/05 16:49:51 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putchar(int c)
{
	int	count;

	count = write(1, &c, 1);
	return (count);
}

int	ft_putstr(char *str)
{
	size_t	len;
	int		count;

	len = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[len])
		len++;
	count = write(1, str, len);
	return (count);
}
