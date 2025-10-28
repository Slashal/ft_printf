/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:11:18 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 18:30:51 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new && *lst)
	{
		last = *lst;
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else if (!*lst)
		*lst = new;
}
// void del (void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list		*begin;
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	char		*str = strdup("lorem");
// 	char		*str2 = strdup("ipsum");
// 	char		*str3 = strdup("dolor");
// 	char		*str4 = strdup("sit");

// 	elem = ft_lstnew(str);
// 	elem2 = ft_lstnew(str2);
// 	elem3 = ft_lstnew(str3);
// 	elem4 = ft_lstnew(str4);
// 	if (!elem || !elem2 || !elem3 || !elem4)
// 		return (0);
// 	else
// 	{
// 		begin = NULL;
// 		ft_lstadd_back(&begin, elem);
// 		ft_lstadd_back(&begin, elem2);
// 		ft_lstadd_back(&begin, elem3);
// 		ft_lstadd_back(&begin, elem4);
// 		while (begin)
// 		{
// 			printf("%s\n", (char *)begin->content);
// 			begin = begin->next;
// 		}
// 	}
// 	ft_lstclear(&elem, del);
// 	return (0);
// }