/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:51:03 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/28 18:43:05 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf (const char *format, ...)
{
	va_list	param;
	size_t len_str;
	size_t i;

	va_start (param, format);
	len_str = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len_str = check_flag(param, format[++i],len_str);
			i++;
		}
		else 
			len_str = flag_char(format[i++], len_str);
	}
	va_end(param);
	return (len_str);
}

int main()
{
	void	*a = "Hello";
	int		i = 0;

	printf("------test de toutes les fonctions---------\n\n");

	ft_printf("------test de %%c avec ma fonction-------\n%c\n", 'a');
	printf("------test de %%c avec la fonction printf-----\n%c\n\n", 'a');
	
	ft_printf("------test de %%s avec ma fonction-------\n%s\n", "Hello World !");
	printf("------test de %%s avec la fonction printf-----\n%s\n\n", "Hello World !");

	ft_printf("------test de %%p avec ma fonction-------\n%p\n", a);
	printf("------test de %%p avec la fonction printf-----\n%p\n\n", a);

	ft_printf("------test de %%d avec ma fonction-------\n%d\n", 42);
	printf("------test de %%d avec la fonction printf-----\n%d\n\n", 42);

	ft_printf("------test de %%i avec ma fonction-------\n%i\n", 42);
	printf("------test de %%i avec la fonction printf-----\n%i\n\n", 42);

	ft_printf("------test de %%u avec ma fonction-------\n%u\n", 42);
	printf("------test de %%u avec la fonction printf-----\n%u\n\n", 42);

	ft_printf("------test de %%x avec ma fonction-------\n%x\n", 42);
	printf("------test de %%x avec la fonction printf-----\n%x\n\n", 42);

	ft_printf("------test de %%X avec ma fonction-------\n%X\n", 42);
	printf("------test de %%X avec la fonction printf-----\n%X\n\n", 42);

	ft_printf("------test de %% avec ma fonction-------\n%%\n");
	printf("------test de %% avec la fonction printf-----\n%%\n\n");


	i = ft_printf("------test de ce que retourne la fonction-----\n%c\n", 'a');
	ft_printf("-------ce que retourne ma fonction------ \n [%d]\n", i);
	i = printf("------test de ce que retourne la fonction-----\n%c\n", 'a');
	printf("-------ce que retourne la fonction prinft------ \n [%d]\n", i);
}
