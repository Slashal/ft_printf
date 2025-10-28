/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:15:35 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:06:43 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dest2;

	i = 0;
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}

// int main(int argc, char *argv[])
// {
// 	// 1 - src / 2 - len
// 	if (argc == 3)
// 	{
// 		char *src = argv[1];
// 		char dst1[50];
// 		char dst2[50];
// 		size_t size = atoi(argv[2]);

// 		ft_memcpy(dst1, src, size);
// 		memcpy(dst2, src, size);

// 		printf("ft_memcpy : %s\n", dst1);
// 		printf("memcpy    : %s\n", dst2);
// 		printf("Compare   : %s\n", memcmp(dst1, dst2, size) == 0 ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");	
// 	}
// }