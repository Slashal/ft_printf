/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:02:34 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:26:41 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int fd = open("test", O_CREAT | O_RDWR | 0644);
// 		if (fd < 0)
// 			return 0;
// 		ft_putstr_fd(argv[1][0], fd);
// 		close(fd);
// 	}
// }