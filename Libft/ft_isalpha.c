/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:38:39 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 10:59:46 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1024);
	return (0);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int i;

// 		i = 0;
// 		printf("\nft_isalpha : ");
// 		while (argv[1][i] != '\0')
// 		{
// 			if (ft_isalpha(argv[1][i]) != 0)
// 				i++;
// 			else if (ft_isalpha(argv[1][i]) == 0)
// 			{
// 				printf("\n'%c' is not alpha", argv[1][i]);
// 				i++;
// 			}
// 		}
// 		i = 0;
// 		printf("\nisalpha    : ");
// 		while (argv[1][i] != '\0')
// 		{
// 			if (isalpha(argv[1][i]) != 0)
// 				i++;
// 			else
// 			{
// 				printf("\n'%c' is not alpha", argv[1][i]);
// 				i++;
// 			}
// 		}
// 		printf("\nCompare    : ");
// 		i = 0;
// 		while (argv[1][i] != '\0')
// 		{
// 			if (ft_isalpha((int)argv[1][i]) == isalpha(argv[1][i]))
// 				i++;
// 			else
// 			{
// 				printf("\n\033[91;01mKO\033[00m");
// 				return (0);
// 			}
// 		}
// 		printf("\033[92;01mOK\033[00m\n");
// 		return (0);
// 	}
// }