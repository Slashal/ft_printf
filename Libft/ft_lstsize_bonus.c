/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguesne <hguesne@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:32:46 by hguesne           #+#    #+#             */
/*   Updated: 2025/10/24 19:31:38 by hguesne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	if (!lst)
		return (0);
	size = 1;
	while (lst->next != NULL)
	{
		size++;
		lst = lst -> next;
	}
	return (size);
}
// void del(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	int i = 0;
// 	t_list *origin;
// 	t_list *header;
// 	t_list *new;

// 	origin = ft_lstnew(ft_strdup("Header"));
// 	header = origin;
// 	while (i < 6)
// 	{
// 		new = ft_lstnew(ft_strdup("test"));
// 		ft_lstadd_back(&origin, new);
// 		i++;
// 		origin = new;
// 	}
// 	printf("%d\n", ft_lstsize(header));
// 	ft_lstclear(&header, del);
// }