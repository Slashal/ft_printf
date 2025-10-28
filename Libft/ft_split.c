/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:53:25 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/27 17:52:21 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static size_t	ft_word_count(char const *s, char c)
{
	size_t	k;
	size_t	i;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			k++;
		while (s[i] != c && s[i])
			i++;
	}
	return (k);
}

static size_t	ft_len_word(char const *s, char c, size_t i)
{
	size_t	j;

	j = i;
	while (s[j] != c && s[j] != '\0')
		j++;
	return (j - i);
}

static char	**ft_check_alloc(const char *s, char c)
{
	size_t	k;
	char	**str;

	k = ft_word_count(s, c);
	if (s[0] == '\0' || k == 0)
		return (str = (char **)ft_calloc(1, sizeof(char *)));
	str = (char **)ft_calloc(k + 1, sizeof(char *));
	return (str);
}

static char	**ft_clean_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	len;
	size_t	j;

	j = 0;
	i = 0;
	str = ft_check_alloc(s, c);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		len = ft_len_word(s, c, i);
		if (len == 0)
			break ;
		str[j] = ft_substr(s, i, len);
		if (!str[j])
			return (ft_clean_str(str));
		j++;
		i += len;
	}
	str[j] = NULL;
	return (str);
}

// int	main(int argc, char *argv[])
// {
// 	if (argc == 3)
// 	{
// 		char	**str;
// 		int	i;
// 		str = ft_split(argv[1], argv[2][0]);
// 		i = 0;
// 		while (str[i] != NULL)
// 		{
// 			printf("%s\n", str[i]);
// 			free(str[i]);
// 			i++;
// 		}
// 		free(str);	
// 	}
// }