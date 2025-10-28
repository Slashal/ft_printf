/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:16:12 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:35:30 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	nb = nb % 10 + '0';
	ft_putchar_fd(nb, fd);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int fd = open("test", O_CREAT | O_RDWR | 0644);
// 		if (fd < 0)
// 			return 0;
// 		ft_putnbr_fd(atoi(argv[1]), fd);
// 		close(fd);
// 	}
// }
