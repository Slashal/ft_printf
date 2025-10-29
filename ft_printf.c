/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:51:03 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/29 14:52:56 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	param;
	size_t	len_str;
	size_t	i;

	va_start (param, format);
	len_str = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len_str = check_flag(param, format[++i], len_str);
			i++;
		}
		else
			len_str = flag_char(format[i++], len_str);
	}
	va_end(param);
	return (len_str);
}

// int main()
// {
// 	char *a = "Pointer";
// 	int		size = 0;

// 	printf("________________________all flags___________________________\n\n");
// 	ft_printf("		         %%c");
// 	size = ft_printf("\n %c\n", 'a');
// 	ft_printf("[%d] : Size ft_printf\n", size);
// 	size = printf("\n %c\n", 'a');
// 	ft_printf("[%d] : Size printf\n", size);

// 	ft_printf("_________________________________________________________\n\n");
// 	ft_printf("		         %%s");
// 	size = ft_printf("\n %s\n", "Hello World !");
// 	ft_printf("[%d] : Size ft_printf\n", size);
// 	size = printf("\n %s\n", "Hello World !");
// 	ft_printf("[%d] : Size printf\n", size);

// 	ft_printf("_________________________________________________________\n\n");
// 	ft_printf("		         %%p");
// 	size = ft_printf("\n %p\n", a);
// 	ft_printf("[%d] : Size ft_printf\n", size);
// 	size = printf("\n %p\n", a);
// 	ft_printf("[%d] : Size printf\n", size);

// 	ft_printf("_________________________________________________________\n\n");
// 	ft_printf("		         %%d");
// 	size = ft_printf("\n %d\n", 42);
// 	ft_printf("[%d] : Size ft_printf\n", size);
// 	size = printf("\n %d\n", 42);
// 	ft_printf("[%d] : Size printf\n", size);

// 	ft_printf("_________________________________________________________\n\n");
// 	ft_printf("		         %%i");
// 	size = ft_printf("\n %i\n", 42);
// 	ft_printf("[%d] : Size ft_printf\n", size);
// 	size = printf("\n %i\n", 42);
// 	ft_printf("[%d] : Size printf\n", size);

// 	ft_printf("_________________________________________________________\n\n");
// 	ft_printf("		         %%u");
// 	size = ft_printf("\n %u\n", 42);
// 	ft_printf("[%d] : Size ft_printf\n", size);
// 	size = printf("\n %u\n", 42);
// 	ft_printf("[%d] : Size printf\n", size);

// 	ft_printf("_________________________________________________________\n\n");
// 	ft_printf("		         %%x");
// 	size = ft_printf("\n %x\n", 42);
// 	ft_printf("[%d] : Size ft_printf\n", size);
// 	size = printf("\n %x\n", 42);
// 	ft_printf("[%d] : Size printf\n", size);

// 	ft_printf("_________________________________________________________\n\n");
// 	ft_printf("		         %%X");
// 	size = ft_printf("\n %X\n", 42);
// 	ft_printf("[%d] : Size ft_printf\n", size);
// 	size = printf("\n %X\n", 42);
// 	ft_printf("[%d] : Size printf\n", size);

// 	ft_printf("_________________________________________________________\n\n");
// 	ft_printf("		         %%%%");
// 	size = ft_printf("\n %%\n");
// 	ft_printf("[%d] : Size ft_printf\n", size);
// 	size = printf("\n %%\n");
// 	ft_printf("[%d] : Size printf\n", size);
// }

// int	main()
// {
// 	int size;
// 	size = ft_printf("NULL %s NULL\n", NULL);
// 	ft_printf("%d\n", size);
// 	size = printf("NULL %s NULL\n", NULL);
// 	ft_printf("%d\n", size);
// }