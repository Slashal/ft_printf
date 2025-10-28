/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:27:14 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/22 11:19:06 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void code_cesar_ad(unsigned int i, char *c)
// {
// 	if (!((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')))
// 		c[i] = c[i];
// 	else if ((c[i] >= 'a' && c[i] <= 'z'))
// 	{
// 		c[i] = c[i] + i;
// 		while (c[i] > 'z')
// 			c[i] -= 26;
// 		while (c[i] < 'a')
// 			c[i] += 26;
// 	}
// 	else if ((c[i] >= 'A' && c[i] <= 'Z'))
// 	{
// 		c[i] = c[i] + i;
// 		while (c[i] > 'Z')
// 			c[i] -= 26;
// 		while (c[i] < 'A')
// 			c[i] += 26;
// 	}
// }

// int main (int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		void (*f)(unsigned int, char*);

// 		f = &code_cesar_ad;
// 		ft_striteri(argv[1], (*f));
// 		printf("%s\n", argv[1]);
// 	}
// }