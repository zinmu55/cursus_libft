/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 21:45:00 by skohtake          #+#    #+#             */
/*   Updated: 2025/07/26 11:48:26 by skohtake         ###   ########.fr       */
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

// // you must comment out below
// // you can check with "valgrind --leak-check=full"

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
// 	printf(" --- start clear --- \n");
// 	ft_lstclear(lst, my_del);
// 	printf(" --- complete clear --- \n");
// }
