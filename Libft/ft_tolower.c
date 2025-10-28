/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:59:20 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:25:15 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}

// int main (int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int i;
// 		char *src1 = argv[1];
// 		char *src2 = strdup(src1);
// 		i = 0;
// 		while (src1[i] != '\0')
// 		{
// 			src1[i] = ft_tolower(src1[i]);
// 			i++;
// 		}
// 		i = 0;
// 		while (src2[i] != '\0')
// 		{
// 			src2[i] = tolower(src2[i]);
// 			i++;
// 		}
// 		printf("ft_tolower : %s\n", src1);
// 		printf("tolower    : %s\n", src2);
// 		if (src1 && src2)
// 			printf("Compare    : %s\n", strcmp(src1, src2) == 0 ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 	 return (0);
// 	}
// }