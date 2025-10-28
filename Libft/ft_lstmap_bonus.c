/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:33:49 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:25:46 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstdst;
	t_list	*lststart;
	void	*dst_content;

	if (!f || !del || !lst)
		return (NULL);
	lststart = ft_lstnew(f(lst->content));
	if (!lststart)
		return (NULL);
	lst = lst->next;
	lstdst = lststart;
	while (lst != NULL)
	{
		dst_content = f(lst->content);
		lstdst = lstdst->next;
		lstdst = ft_lstnew(dst_content);
		if (!lstdst)
		{
			ft_lstclear(&lstdst, del);
			return (NULL);
		}
		ft_lstadd_back(&lststart, lstdst);
		lst = lst->next;
	}
	return (lststart);
}

// void *add(void *content)
// {
// 	int *new_value = malloc(sizeof(int));
// 	if (new_value == NULL)
// 		return (NULL);
// 	*new_value = (*(int *)content) + 1;
// 	return (new_value);
// }

// void print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%d -> ", *(int *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// void del(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	int i = 0;
// 	t_list *liste = NULL;
// 	t_list *result = NULL;

// 	while (i < 5)
// 	{
// 		int *value = malloc(sizeof(int));
// 		*value = i;
// 		ft_lstadd_front(&liste, ft_lstnew((void *)value));
// 		i++;
// 	}

// 	printf("Contenu de la liste 	     	       : ");
// 	print_list(liste);

// 	result = ft_lstmap(liste, add, del);
// 	printf("Liste apres application de la fonction : ");
// 	print_list(result);

// 	ft_lstclear(&result, del);
// 	ft_lstclear(&liste, del);
// 	return 0;
// }
