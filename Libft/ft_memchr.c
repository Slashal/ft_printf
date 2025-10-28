/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:34:19 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:04:34 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	car;

	i = 0;
	car = c;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		if (s2[i] == car)
			return (&s2[i]);
		i++;
	}
	return (NULL);
}

// int main(int argc, char *argv[])
// {
// 	// 1 - s / 2 - c / 3 - n
//     if (argc == 4)
// 	{
// 		char *data = argv[1];
// 		printf("Compare : %s\n", memchr(data, atoi(argv[2]), 
//atoi(argv[3])) == ft_memchr(data, atoi(argv[2]), atoi(argv[3])) ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 		printf("ft_memchr : %p\n", ft_memchr(data, atoi(argv[2]), 
// atoi(argv[3])));
// 		printf("memchr    : %p\n", memchr(data, atoi(argv[2]), atoi(argv[3])));
// 	}
// 	return (0);
// }
