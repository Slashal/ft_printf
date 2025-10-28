/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:56:09 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:10:26 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*point;

	point = s;
	i = 0;
	while (i < n)
	{
		point[i] = c;
		i++;
	}
	return (point);
}

// int main(int argc, char *argv[])
// {
// //	1 - s / 2 - c / 3 - n
// 	if (argc == 4)
// 	{
// 		char *buffer1 = argv[1];
// 		char *buffer2 = strdup(buffer1);
// 		int size = strlen(buffer1);

// 		ft_memset(buffer1, argv[2][0], atoi(argv[3]));
// 		memset(buffer2, argv[2][0], atoi(argv[3]));

// 		printf("ft_memset : %s\n", buffer1);
// 		printf("memset    : %s\n", buffer2);
// 		printf("Compare   : %s\n", memcmp(buffer1, buffer2, size) 
//== 0 ? "\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 	}
// }