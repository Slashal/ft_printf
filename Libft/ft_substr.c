/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:29:55 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:41:05 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if (len == ULONG_MAX)
		len = ft_strlen(s);
	if (start + len < ft_strlen(s))
		s2 = ft_calloc(len + 1, sizeof(char));
	else if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	else
		s2 = ft_calloc(ft_strlen(&s[start]) + 1, sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, &s[start], len + 1);
	return (s2);
}

// int main(int argc, char *argv[])
// {
// // 1 - s / 2 - start / 3 - len
// 	if(argc == 4)
// 	{
// 		char *src = argv[1];
// 		char *dst = ft_substr(src, atoi(argv[2]), atoi(argv[3]));
// 		printf("ft_strdup : %s\n", dst);
// 		free(dst);
// 	}
// }
