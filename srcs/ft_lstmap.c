/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:43:29 by skohtake          #+#    #+#             */
/*   Updated: 2025/07/18 23:14:26 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	else
	{
		while (lst)
		{
			new_lst->content = f(lst->content);
			free(lst->content);
			lst->content = tmp;
			lst = lst->next;
		}
		return (new_lst);
	}
}
