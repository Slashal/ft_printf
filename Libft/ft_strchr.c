/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:08:16 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:18:14 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	int				len;
	unsigned char	car;

	car = c;
	i = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (s[i] == car)
			return ((char *)s + i);
		i++;
	}
	if (s[0] == '\0' && car == '\0')
		return ((char *)s);
	return (NULL);
}

// int main (int argc, char *argv[])
// {
// // 1 - s / 2 - c
// 	if (argc == 3)
// 	{
// 		char *str1 = ft_strchr(argv[1], argv[2][0]);
// 		char *str2 = strchr(argv[1], argv[2][0]);

// 		printf("ft_strchr : %s\n", str1);
// 		printf("strchr    : %s\n", str2);
// 		if (str1 || str2)
// 			printf("Compare   : %s\n", strcmp(str1, str2) == 0 ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 		else if (str1 == NULL && str2 == NULL)
// 			printf("Compare   : \033[92;01mOK\033[00m\n");
// 		else
// 			printf("Compare   : \033[91;01mKO\033[00m\n");
// 	}
// }
