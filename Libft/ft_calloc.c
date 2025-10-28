/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:50:07 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:42:00 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

// int main(int argc, char *argv[]) 
// {
// 	if (argc == 2)
// 	{
// 		size_t size = atoi(argv[1]); 
// 		int *array1 = (int *)ft_calloc(size, sizeof(int));
// 		int *array2 = (int *)calloc(size, sizeof(int));
// 		printf("ft_calloc                  : ");
// 		for (size_t i = 0; i < size; i++)
// 			printf("%d ", array1[i]);
// 		printf("\ncalloc                     : ");
// 		for (size_t i = 0; i < size; i++)
// 			printf("%d ", array2[i]);
// 		printf("\nMemory initialized to zero : %s\n", 
//memcmp(array1, array2, size)
// == 0 ? "\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 		free(array1);
// 		free(array2);
// 	}
// }