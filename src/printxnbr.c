/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printxnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 16:57:29 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/29 16:57:31 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int printxnbr(unsigned int nb)
{
    char    *base;
    int     count;

    count = 0;
    base = "0123456789abcdef";
    while (nb >= 16)
    {
        count += write(1,&base[nb / 16], 1);
        nb = nb % 16;
    }
    if (nb < 16)
        count += write(1, &base[nb], 1);
    return (count); 
}