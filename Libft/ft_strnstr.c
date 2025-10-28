/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:51:48 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:22:28 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)&big[i]);
	while (big[i])
	{
		j = 0;
		while ((big[i + j] == little[j]) && (j < len))
		{
			j++;
			if (((i + j) <= len) && (little[j] == '\0'))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int main (int argc, char *argv[])
// {
// // 1 - big / 2 - little / 3 - len
// 	if (argc == 4)
// 	{
// 		char *str1 = ft_strnstr(argv[1], argv[2], atoi(argv[3]));
// 		char *str2 = strnstr(argv[1], argv[2], atoi(argv[3]));

// 		printf("ft_strnstr : %s\n", str1);
// 		printf("strnstr    : %s\n", str2);
// 		if (str1 || str2)
// 			printf("Compare   : %s\n", strcmp(str1, str2) == 0 ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 		else if (str1 == NULL && str2 == NULL)
// 			printf("Compare   : \033[92;01mOK\033[00m\n");
// 		else
// 			printf("Compare   : \033[91;01mKO\033[00m\n");
// 	}
// 	return (0);
// }
