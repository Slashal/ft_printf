/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:19:50 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:09:41 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst2;
	unsigned char	*src2;
	size_t			i;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	if (src < dst)
	{
		while (len != 0)
		{
			dst2[len - 1] = src2[len - 1];
			len --;
		}
		return (dst);
	}
	while (i < len)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

// int main(int argc, char *argv[])
// {
// 	// 1 - src / 2 - len
// 	if (argc == 3)
// 	{
// 		char *buffer1 = argv[1];
// 		char *buffer2 = strdup(buffer1);
// 		int size = strlen(argv[1]);

// 		ft_memmove(buffer1 + 2, buffer1, atoi(argv[2]));
// 		memmove(buffer2 + 2, buffer2, atoi(argv[2]));

// 		printf("ft_memmove : %s\n", buffer1);
// 		printf("memmove    : %s\n", buffer2);
// 		printf("Compare    : %s\n", memcmp(buffer1, buffer2, size)
// == 0 ? "\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");	
// 	}
// }
