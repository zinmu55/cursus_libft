/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shintarokohtake <shintarokohtake@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 22:21:59 by shintarokoh       #+#    #+#             */
/*   Updated: 2025/07/26 11:03:41 by shintarokoh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// // you must comment out below

// int	main()
// {
// 	t_list	**lst;
// 	t_list	*first_node;
// 	t_list	*second_node;

// 	first_node = ft_lstnew("first");
// 	second_node = ft_lstnew("second");
// 	lst = &first_node;
// 	ft_lstadd_front(lst, second_node);

// 	printf(" (*lst)->content	: %s \n", (char *)((*lst)->content));
// 	printf(" (*lst)->next->content	: %s \n", (char *)((*lst)->next->content));
// }
