/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:14:50 by skohtake          #+#    #+#             */
/*   Updated: 2025/07/26 11:37:22 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// // You must comment out below

// void	my_del(void *content)
// {
// 	free(content);
// 	content = NULL;
// }

// int	main(void)
// {
// 	t_list	**lst;
// 	t_list	*first_node;
// 	t_list	*second_node;

// 	printf(" --- create nodes and link with list --- \n");
// 	first_node = ft_lstnew(ft_strdup("first"));
// 	second_node = ft_lstnew(ft_strdup("second"));
// 	lst = &first_node;
// 	ft_lstadd_back(lst, second_node);
// 	printf(" --- start check --- \n");
// 	printf(" (*lst)->content	: %s \n", (char *)((*lst)->content));
// 	printf(" (*lst)->next->content	: %s \n", (char *)((*lst)->next->content));
// 	printf(" --- start delone to the 2nd node--- \n");
// 	ft_lstdelone((*lst)->next, my_del);
// 	printf(" --- complete delone the 2nd node --- \n");
// 	printf(" --- create nodes and link with list --- \n");
// 	printf(" --- start check --- \n");
// 	printf(" (*lst)->content	: %s \n", (char *)((*lst)->content));
// 	printf(" (*lst)->next->content	: %s \n", (char *)((*lst)->next->content));
// }
