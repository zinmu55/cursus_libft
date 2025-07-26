/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:31:18 by skohtake          #+#    #+#             */
/*   Updated: 2025/07/26 14:09:13 by skohtake         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// // You must comment out below

// void	my_putendl(void *content)
// {
// 	ft_putendl_fd((char *)content, STDOUT_FILENO);
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
// 	printf(" --- start lstiter with printf --- \n");
// 	ft_lstiter((*lst), my_putendl);
// 	printf(" --- complete lstiter with printf --- \n");
// }
