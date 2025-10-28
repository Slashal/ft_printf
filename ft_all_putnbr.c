/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:27:29 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/28 17:33:10 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_low_fd(int n, int fd)
{
	long	nb;
	char *base = "0123456789abcdef";
	nb = n;
	if (nb >= 16)
	{
		ft_putnbr_base_low_fd(nb / 16, fd);
	}
	nb = nb % 16;
	ft_putchar_fd(base[nb], fd);
}

void	ft_putnbr_base_up_fd(int n, int fd)
{
	long	nb;
	char *base = "0123456789ABCDEF";
	nb = n;
	if (nb >= 16)
	{
		ft_putnbr_base_up_fd(nb / 16, fd);
	}
	nb = nb % 16;
	ft_putchar_fd(base[nb], fd);
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
