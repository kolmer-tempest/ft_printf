/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:00:15 by bpires-k          #+#    #+#             */
/*   Updated: 2026/06/06 17:02:45 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// #include "libft.h"
# include <stdarg.h>
# include <unistd.h>
// # include <stdio.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		print_format(const char *format, va_list args);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		printnbr(int n);
int		printxnbr(unsigned int nb);
int		printx_nbr(unsigned int nb);
int		printunbr(unsigned int nb);
int		printptr(void *ptr);

#endif
