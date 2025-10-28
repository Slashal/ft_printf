/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:05:11 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:23:07 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	car;

	car = c;
	i = ft_strlen(s);
	while (i != -1)
	{
		if (s[i] == car)
			return ((char *)s + i);
		i--;
	}
	if (s[0] == '\0' && car == '\0')
		return ((char *)s);
	return (NULL);
}

// int main ()
// {
// 1 - s / 2 - c
	// if (argc == 3)
	// {
		// char *str1 = ft_strrchr("tripou1ille", '1' + 256);
		// char *str2 = strrchr("tripoui1lle", '1' + 256);

		// printf("ft_strrchr : %s\n", str1);
		// printf("strrchr    : %s\n", str2);
		// if (str1 || str2)
		// 	printf("Compare    : %s\n", strcmp(str1, str2) == 0 ? 
		//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
		// else if (str1 == NULL && str2 == NULL)
		// 	printf("Compare    : \033[92;01mOK\033[00m\n");
		// else
		// 	printf("Compare    : \033[91;01mKO\033[00m\n");
	// }
// }