/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:24:35 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:06:13 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((ptr1[i] != ptr2[i]) && (ptr1[i] - ptr2[i]) > 0)
			return (1);
		else if ((ptr1[i] != ptr2[i]) && (ptr1[i] - ptr2[i]) < 0)
			return (-1);
		i++;
	}
	return (0);
}

// int main(int argc, char *argv[])
// {
// // 1 - s1 / 2 - s2 / 3 - n
//     if (argc == 4)
// 	{
// 		char *data1 = argv[1];
// 		char *data2 = argv[2];
// 		int result1 = memcmp(data1, data2, atoi(argv[3]));
// 		int result2 = ft_memcmp(data1, data2, atoi(argv[3]));

// 		printf("Compare : ");
// 		if (result1 > 0 && result2 > 0)
// 			printf("\033[92;01mOK\033[00m\n");
// 		else if (result1 < 0 && result2 < 0)
// 			printf("\033[92;01mOK\033[00m\n");
// 		else if (result1 == result2)
// 			printf("\033[92;01mOK\033[00m\n");
// 		else
// 			printf("\033[91;01mKO\033[00m\n");
// 	}
// 	return (0);
// }