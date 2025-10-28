/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:40:06 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:32:26 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int fd = open("test", O_CREAT | O_RDWR | 0644);
// 		if (fd < 0)
// 			return 0;
// 		ft_putendl_fd(argv[1], fd);
// 		close(fd);
// 	}
// }