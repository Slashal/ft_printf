/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:59:21 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/30 09:57:55 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	flag_hexa_up(unsigned int i, size_t len_str)
{
	ft_putnbr_base(i, 1, "0123456789ABCDEF");
	while (i >= 16)
	{
		i /= 16;
		len_str++;
	}
	return (++len_str);
}

size_t	flag_hexa_low(unsigned int i, size_t len_str)
{
	ft_putnbr_base(i, 1, "0123456789abcdef");
	while (i >= 16)
	{
		i /= 16;
		len_str++;
	}
	return (++len_str);
}

size_t	flag_percent(size_t len_str)
{
	ft_putchar_fd('%', 1);
	return (++len_str);
}

size_t	check_flag(va_list param, char c, size_t len_str)
{
	if (c == 'd' || c == 'i')
		len_str = flag_int(va_arg(param, int), len_str);
	if (c == 's')
		len_str = flag_str(va_arg(param, char *), len_str);
	if (c == 'c')
		len_str = flag_char(va_arg(param, int), len_str);
	if (c == 'p')
		len_str = flag_point(va_arg(param, void *), len_str);
	if (c == 'u')
		len_str = flag_unsigned(va_arg(param, unsigned int), len_str);
	if (c == 'x')
		len_str = flag_hexa_low(va_arg(param, unsigned int), len_str);
	if (c == 'X')
		len_str = flag_hexa_up(va_arg(param, unsigned int), len_str);
	if (c == '%')
		len_str = flag_percent(len_str);
	return (len_str);
}
