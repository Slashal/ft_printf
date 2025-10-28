/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:52:52 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:16:30 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst -> next;
	return (lst);
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
// 	t_list		*last;
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

// 		last = ft_lstlast(elem4);
// 		printf("Last : %s\n", (char *)last->content);
// 		printf("Elem : %s\n", (char *)elem->content);
// 	}
// 	ft_lstclear(&elem4, del);
// 	return (0);
// }