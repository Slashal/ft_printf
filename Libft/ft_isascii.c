/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:13:45 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 10:59:56 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int i;

// 		i = 0;
// 		printf("\nft_isascii : ");
// 		while (argv[1][i] != '\0')
// 		{
// 			if (ft_isascii(argv[1][i]) != 0)
// 				i++;
// 			else if (ft_isascii(argv[1][i]) == 0)
// 			{
// 				printf("\n'%c' is not ascii", argv[1][i]);
// 				i++;
// 			}
// 		}
// 		i = 0;
// 		printf("\nisascii    : ");
// 		while (argv[1][i] != '\0')
// 		{
// 			if (isascii(argv[1][i]) != 0)
// 				i++;
// 			else
// 			{
// 				printf("\n'%c' is not ascii", argv[1][i]);
// 				i++;
// 			}
// 		}
// 		printf("\nCompare    : ");
// 		i = 0;
// 		while (argv[1][i] != '\0')
// 		{
// 			if (ft_isascii((int)argv[1][i]) == isascii(argv[1][i]))
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