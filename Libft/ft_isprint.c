/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:24:03 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:00:06 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (16384);
	return (0);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		printf("ft_isprint : ");
// 		if (ft_isprint(argv[1][0]) != 0)
// 			printf("Printable");
// 		else
// 			printf("Not printable");

// 		printf("\nisprint    : ");
// 		if (isprint(argv[1][0]) != 0)
// 			printf("Printable");
// 		else
// 			printf("Not printable");

// 		printf("\nCompare    : ");
// 		if (ft_isprint(argv[1][0]) == isprint(argv[1][0]))
// 			printf("\033[92;01mOK\033[00m\n");
// 		else
// 			printf("\033[91;01mKO\033[00m\n");
// 		return (0);
// 	}
// }