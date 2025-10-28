/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:42:11 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 17:44:54 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	test(unsigned long long result, int sign, int j)
{
	long long	final;

	if (result > LLONG_MAX && sign < 0)
		return (0);
	if (result > LLONG_MAX && sign > 0)
		return (-1);
	if (j > 20 && sign < 0)
		return (0);
	if (j > 20 && sign > 0)
		return (-1);
	final = result;
	return (final * sign);
}

int	ft_atoi(const char *nptr)
{
	int					sign;
	int					i;
	int					j;
	unsigned long long	result;

	sign = 1;
	result = 0;
	j = 0;
	i = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -sign;
	while (((nptr[i] >= '0') && (nptr[i] <= '9')) && nptr[i])
	{
		result *= 10;
		result += nptr[i++] - '0';
		if (result != 0)
			j++;
	}
	return (test(result, sign, j));
}

// int main (int argc, char *argv[])
// {
// 	if(argc == 2)
// 	{
// 		printf("ft_atoi : %d\n", ft_atoi(argv[1]));
// 		printf("atoi    : %d\n", atoi(argv[1]));
// 		printf("Result  : %s\n", ft_atoi(argv[1])
//== atoi(argv[1]) ? "\033[92;01mOK\033[00m" : "\033[91;01mKO\033[00m");
// 	}
// }