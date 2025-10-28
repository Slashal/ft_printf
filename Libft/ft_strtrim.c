/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:35:23 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:40:28 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_value(const char *s, const char *set)
{
	if ((s[0] == '\0' && set[0] == '\0') || s[0] == '\0')
		return (1);
	return (0);
}

static char	check_set(const char c, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (0);
		j++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	size_t	k;

	i = 0;
	k = 0;
	if (check_value(s1, set) == 1)
		return (ft_calloc(1, sizeof(char)));
	j = ft_strlen(s1);
	while (check_set(s1[i], set) == 0 && s1[i])
		i++;
	while (check_set(s1[j], set) == 0)
		j--;
	if (j >= i)
		s2 = malloc(sizeof(char) * ((j - i) + 2));
	else
		s2 = ft_calloc(1, sizeof(char));
	if (!s2)
		return (NULL);
	while (s1[i] && i <= j)
		s2[k++] = s1[i++];
	s2[k] = '\0';
	return (s2);
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 3)
// 	{
// 		char *s1 = argv[1];
// 		char *set = argv[2];
// 		char *s2 = ft_strtrim(s1, set);
// 		printf("ft_strtrim : %s\n", s2);
// 		free(s2);
// 	}
// }
