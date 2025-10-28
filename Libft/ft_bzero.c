/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:56:16 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/27 09:19:39 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*point;

	if (!s)
		return ;
	point = s;
	i = 0;
	while (i < n)
	{
		point[i] = '\0';
		i++;
	}
}

// int main()
// {
// 	char array1[100] = "TESt";
// 	char array2[100] = "TEst";
// 	size_t size = -1;
// 	printf("Before :\nft_bzero         : ");
// 	printf("%s\n", array1);
// 	printf("\nbzero            : ");
// 	printf("%s\n", array2);

// 	ft_bzero(array1, size);
// 	bzero(array2, size);
// 	printf("\n\nAfter :\nft_bzero         : ");
// 	printf("%s\n", array1);
// 	printf("\nbzero            : ");
// 	printf("%s\n", array2);
// }
