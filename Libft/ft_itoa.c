/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:05:35 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 18:07:57 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_reverse(char *str)
{
	char	temp;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i <= (len / 2))
	{
		temp = str[i];
		str[i] = str[len - i];
		str[len - i] = temp;
		i++;
	}
	return (str);
}

static int	ft_putnbr_str(long n, char *str)
{
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	if (n < 0)
	{
		n = -n;
		sign = -sign;
	}
	if (n > 9)
	{
		ft_putnbr_str(n / 10, &str[i + 1]);
		n = n % 10;
		ft_putnbr_str(n % 10, &str[i]);
	}
	str[i] = n + '0';
	return (sign);
}

char	*ft_itoa(int n)
{
	long	i;
	int		j;
	char	*str;

	i = n;
	j = 1;
	while (i > 9 || i < -9)
	{
		i /= 10;
		j++;
	}
	if (n < 0)
		str = ft_calloc((j + 2), sizeof(char));
	else
		str = ft_calloc((j + 1), sizeof(char));
	if (!str)
		return (NULL);
	i = ft_putnbr_str(n, str);
	if (i < 0)
		str[j] = '-';
	return (ft_reverse(str));
}

// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		char *str;
// 		str = ft_itoa(atoi(argv[1]));
// 		printf("%s\n", str);
// 		free(str);
// 	}
// }