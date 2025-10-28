/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:50:20 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:38:47 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*s3;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, len1 + 1);
	ft_strlcat(s3, s2, len2 + len1 + 1);
	return (s3);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 3)
// 	{
// 		char *dst1;
// 		dst1 = ft_strjoin(argv[1], argv[2]);
// 		printf("%s\n", dst1);
// 		free(dst1);
// 	}
// }
