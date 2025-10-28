/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:04:48 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 17:27:00 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		|| (c >= '0' && c <= '9'))
		return (8);
	return (0);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int i;

// 		i = 0;
// 		printf("\nft_isalnum : ");
// 		while (argv[1][i] != '\0')
// 		{
// 			if (ft_isalnum(argv[1][i]) != 0)
// 				i++;
// 			else if (ft_isalnum(argv[1][i]) == 0)
// 			{
// 				printf("\n'%c' is not alnum", argv[1][i]);
// 				i++;
// 			}
// 		}
// 		i = 0;
// 		printf("\nisalnum    : ");
// 		while (argv[1][i] != '\0')
// 		{
// 			if (isalnum(argv[1][i]) != 0)
// 				i++;
// 			else
// 			{
// 				printf("\n'%c' is not alnum", argv[1][i]);
// 				i++;
// 			}
// 		}
// 		printf("\nCompare    : ");
// 		i = 0;
// 		while (argv[1][i] != '\0')
// 		{
// 			if (ft_isalnum((int)argv[1][i]) == isalnum(argv[1][i]))
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