/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:58:12 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:00:00 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		int i;

// 		i = 0;
// 		printf("\nft_isdigit : ");
// 		while (argv[1][i] != '\0')
// 		{
// 			if (ft_isdigit(argv[1][i]) != 0)
// 				i++;
// 			else if (ft_isdigit(argv[1][i]) == 0)
// 			{
// 				printf("\n'%c' is not digit", argv[1][i]);
// 				i++;
// 			}
// 		}
// 		i = 0;
// 		printf("\nisdigit    : ");
// 		while (argv[1][i] != '\0')
// 		{
// 			if (isdigit(argv[1][i]) != 0)
// 				i++;
// 			else
// 			{
// 				printf("\n'%c' is not digit", argv[1][i]);
// 				i++;
// 			}
// 		}
// 		printf("\nCompare    : ");
// 		i = 0;
// 		while (argv[1][i] != '\0')
// 		{
// 			if (ft_isdigit((int)argv[1][i]) == isdigit(argv[1][i]))
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