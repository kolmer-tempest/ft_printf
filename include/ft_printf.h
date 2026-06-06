/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:00:15 by bpires-k          #+#    #+#             */
/*   Updated: 2026/06/05 16:00:17 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// #include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		print_format(const char *format, va_list args);
int		ft_write(char *str, int slen);
int		printnbr(int nb);
int		printxnbr(unsigned long nb);
int		printx_nbr(unsigned long nb);
char	*ft_itoa(int n);

#endif
