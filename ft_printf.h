/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:31:14 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/29 12:58:04 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include "Libft/libft.h"

void	ft_putnbr_base_low_fd(unsigned int n, int fd);
void	ft_putnbr_base_up_fd(unsigned int n, int fd);
void	ft_putnbr_u_fd(unsigned int n, int fd);
void	ft_putnbr_base_ptr_fd(unsigned long long n, int fd);
size_t	flag_int(long integer_value, size_t len_str);
size_t	flag_str(char *str, size_t len_str);
size_t	flag_char(int c, size_t len_str);
size_t	flag_point(void *ptr, size_t len_str);
size_t	flag_unsigned(unsigned int i, size_t len_str);
size_t	flag_hexa_up(unsigned int i, size_t len_str);
size_t	flag_hexa_low(unsigned int i, size_t len_str);
size_t	flag_percent(size_t len_str);
size_t	check_flag(va_list param, char c, size_t len_str);
int		ft_printf(const char *format, ...);

#endif
