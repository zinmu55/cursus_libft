/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:02:08 by skohtake          #+#    #+#             */
/*   Updated: 2025/07/26 11:08:05 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	else if (!*lst)
	{
		*lst = new;
		return ;
	}
	(ft_lstlast(*lst))->next = new;
}

// // you must comment out below

// int	main(void)
// {
// 	t_list	**lst;
// 	t_list	*first_node;
// 	t_list	*second_node;

// 	first_node = ft_lstnew("first");
// 	second_node = ft_lstnew("second");
// 	lst = &first_node;
// 	ft_lstadd_back(lst, second_node);
// 	printf(" (*lst)->content	: %s \n", (char *)((*lst)->content));
// 	printf(" (*lst)->next->content	: %s \n", (char *)((*lst)->next->content));
// }
