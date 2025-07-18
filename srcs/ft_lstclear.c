/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:45:00 by skohtake          #+#    #+#             */
/*   Updated: 2025/07/18 22:24:24 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	else
	{
		while (*lst)
		{
			del((*lst)->content);
			tmp = (*lst)->next;
			free(*lst);
			*lst = tmp;
		}
	}
}
