/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:29:11 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 15:27:22 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc + size);
	if (size > (lensrc + lendst + 1))
		size = (lensrc + lendst + 1);
	while ((i < (size - lendst - 1)) && size > lendst)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	if ((lensrc + lendst) > (lensrc + size))
		return (lensrc + size);
	return (lensrc + lendst);
}

// int main (int argc, char *argv[])
// {
// // 1 - src / 2 - size
// 	if (argc == 3)
// 	{
// 		char *src = argv[1];
// 		char dst1[30] = "test";
// 		char dst2[30] = "test";
// 		size_t len1 = ft_strlcat(dst1, src, atoi(argv[2]));
// 		size_t len2 = strlcat(dst2, src, atoi(argv[2]));
// 		printf("ft_strdup  : %s		return value : %zu\n", dst1, len1);
// 		printf("strdup     : %s		return value : %zu\n", dst2, len2);
// 		printf("Compare dst: %s\n", strcmp(dst1, dst2) == 0 ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 		printf("Compare len: %s\n", len1 == len2 ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 	}
// }