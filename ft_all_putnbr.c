/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:27:29 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/29 14:30:14 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_low_fd(unsigned int n, int fd)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putnbr_base_low_fd(n / 16, fd);
	}
	n = n % 16;
	ft_putchar_fd(base[n], fd);
}

void	ft_putnbr_base_up_fd(unsigned int n, int fd)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_putnbr_base_up_fd(n / 16, fd);
	}
	n = n % 16;
	ft_putchar_fd(base[n], fd);
}

void	ft_putnbr_u_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	n = n % 10 + '0';
	ft_putchar_fd(n, fd);
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
