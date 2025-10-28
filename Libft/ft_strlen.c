/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:42:18 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:21:01 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		size_t len1 = ft_strlen(argv[1]);
// 		size_t len2 = strlen(argv[1]);
// 		printf("ft_strlen   : %zu\n", len1);
// 		printf("strlen      : %zu\n", len2);
// 		printf("Compare len : %s\n", len1 == len2 ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 	}
// }