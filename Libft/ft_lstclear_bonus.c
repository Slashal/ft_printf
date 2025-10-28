/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:14:35 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 18:54:21 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	while (*lst != NULL && lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
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
// 		ft_lstadd_front(&begin, elem);
// 		ft_lstadd_front(&begin, elem2);
// 		ft_lstadd_front(&begin, elem3);
// 		ft_lstadd_front(&begin, elem4);
// 	}
// 	ft_lstclear(&elem4, del);
// 	return (0);
// }