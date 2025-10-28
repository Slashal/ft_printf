/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:23:30 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:08:12 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*apply;

	apply = lst;
	while (apply != NULL)
	{
		f(apply->content);
		apply = apply->next;
	}
}

// void	ft_modify_list_with_d(void *elem)
// {
// 	int		len;
// 	char		*content;

// 	len = 0;
// 	content = (char *)elem;
// 	while (content[len])
// 	{
// 		content[len++] = 'd';
// 	}
// }

// void del (void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	t_list		*header;
// 	char		*str = strdup("lorem");
// 	char		*str2 = strdup("ipsum");
// 	char		*str3 = strdup("dolor");
// 	char		*str4 = strdup("sit");

// 	elem = ft_lstnew(str);
// 	elem2 = ft_lstnew(str2);
// 	elem3 = ft_lstnew(str3);
// 	elem4 = ft_lstnew(str4);

// 	header = elem;
// 	elem->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = elem4;

// 	ft_lstiter(elem, &ft_modify_list_with_d);

// 	while (elem)
// 	{
// 		printf("%s\n", (char *)elem->content);
// 		elem = elem->next;
// 	}
// 	ft_lstclear(&header, del);
// 	return (0);
// }
