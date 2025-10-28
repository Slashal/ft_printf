/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:39:02 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:42:09 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main (int argc, char *argv[])
// {

// 	if (argc == 2)
// 	{
// 		char *src = argv[1];
// 		char *dst1 = ft_strdup(src);
// 		char *dst2 = strdup(src);
// 		printf("ft_strdup : %s\n", dst1);
// 		printf("strdup    : %s\n", dst2);
// 		printf("Compare   : %s\n", strcmp(dst1, dst2) 
//== 0 ? "\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 		free(dst1);
// 		free(dst2);
// 	}
// }
