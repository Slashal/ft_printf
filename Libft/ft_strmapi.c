/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:36:11 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:37:49 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	i = 0;
	len = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

// char code_cesar_ad(unsigned int i, char c)
// {
// 	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
// 		return (c);
// 	if ((c >= 'a' && c <= 'z'))
// 	{
// 		c = c + i;
// 		while (c > 'z')
// 			c -= 26;
// 		while (c < 'a')
// 			c += 26;
// 	}
// 	else if ((c >= 'A' && c <= 'Z'))
// 	{
// 		c = c + i;
// 		while (c > 'Z')
// 			c -= 26;
// 		while (c < 'A')
// 			c += 26;
// 	}
// 	return (c);
// }

// int main (int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		char *str;
// 		char (*f)(unsigned int, char);

// 		f = &code_cesar_ad;
// 		str = ft_strmapi(argv[1], (*f));
// 		printf("%s\n", str);
// 		free(str);
// 	}
// }