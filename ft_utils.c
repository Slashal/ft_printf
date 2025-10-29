/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:30:14 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/29 14:33:58 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	flag_int(long integer_value, size_t len_str)
{
	ft_putnbr_fd(integer_value, 1);
	if (integer_value < 0)
	{
		integer_value = -integer_value;
		len_str++;
	}
	while (integer_value > 9)
	{
		integer_value /= 10;
		len_str++;
	}
	return (++len_str);
}

size_t	flag_str(char *str, size_t len_str)
{
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (len_str += 6);
	}
	ft_putstr_fd(str, 1);
	len_str += ft_strlen(str);
	return (len_str);
}

size_t	flag_char(int c, size_t len_str)
{
	ft_putchar_fd(c, 1);
	return (++len_str);
}

size_t	flag_point(void *ptr, size_t len_str)
{
	unsigned long long	i;

	i = (unsigned long long)ptr;
	if (i == 0)
	{
		write(1, "(nil)", 5);
		return (len_str + 5);
	}
	ft_putstr_fd("0x", 1);
	len_str += 2;
	ft_putnbr_base_ptr_fd(i, 1);
	while (i >= 16)
	{
		i /= 16;
		len_str++;
	}
	return (++len_str);
}

size_t	flag_unsigned(unsigned int i, size_t len_str)
{
	ft_putnbr_u_fd(i, 1);
	while (i > 9)
	{
		i /= 10;
		len_str++;
	}
	return (++len_str);
}
