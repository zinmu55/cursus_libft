/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:43:29 by skohtake          #+#    #+#             */
/*   Updated: 2025/07/19 13:43:30 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst_head;
	t_list	*new_node;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	new_lst_head = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		new_node = ft_lstnew(tmp);
		if (!new_node)
		{
			ft_lstclear(&new_lst_head, del);
			del(tmp);
			return (NULL);
		}
		ft_lstadd_back(&new_lst_head, new_node);
		lst = lst->next;
	}
	return (new_lst_head);
}
