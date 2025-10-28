/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:06:03 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:20:52 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	if ((size - 1) > len)
		size = len + 1;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// int main (int argc, char *argv[])
// {
// // 1 - src / 2 - size
// 	if (argc == 3)
// 	{
// 		char *src = argv[1];
// 		char dst1[30] = "test";
// 		char dst2[30] = "test";
// 		size_t len1 = ft_strlcpy(dst1, src, atoi(argv[2]));
// 		size_t len2 = strlcpy(dst2, src, atoi(argv[2]));
// 		printf("ft_strdup  : %s		return value : %zu\n", dst1, len1);
// 		printf("strdup     : %s		return value : %zu\n", dst2, len2);
// 		printf("Compare dst: %s\n", strcmp(dst1, dst2) == 0 ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 		printf("Compare len: %s\n", len1 == len2 ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 	}
// }