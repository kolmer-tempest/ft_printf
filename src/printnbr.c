/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 21:37:01 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/27 21:37:03 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printnbr(int nb)
{
	int		count;
	char	*str;
	
	str = ft_itoa(nb);
	count = write(1, &str, ft_strlen(str));
	return (count);
}
