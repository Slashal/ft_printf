/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:44:53 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:22:17 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			diff = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}

// int main(int argc, char *argv[])
// {
// //	1 - s1 / 2 - s2 / 3 - n
// 	if (argc == 4)
// 	{
// 		int diff1 = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
// 		int diff2 = strncmp(argv[1], argv[2], atoi(argv[3]));

// 		printf("ft_strncmp   : %d\n", diff1);
// 		printf("strncmp      : %d\n", diff2);
// 		printf("Compare diff : %s\n", diff1 == diff2 ? 
//"\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 	}
// 	return (0);
// }