/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:27:29 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/30 10:10:41 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int n, int fd, char *base)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (n >= base_len)
	{
		ft_putnbr_base(n / base_len, fd, base);
	}
	n = n % base_len;
	ft_putchar_fd(base[n], fd);
}

void	ft_putnbr_base_ptr_fd(unsigned long long n, int fd)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putnbr_base_ptr_fd(n / 16, fd);
	}
	n = n % 16;
	ft_putchar_fd(base[n], fd);
}
