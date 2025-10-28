/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:58:35 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:12:23 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int fd = open("test", O_CREAT | O_RDWR | 0644);
// 		if (fd < 0)
// 			return 0;
// 		ft_putchar_fd(argv[1][0], fd);
// 		close(fd);
// 	}
// }
