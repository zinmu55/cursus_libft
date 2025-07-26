/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skohtake <skohtake@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:43:29 by skohtake          #+#    #+#             */
/*   Updated: 2025/07/26 12:16:09 by skohtake         ###   ########.fr       */
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

// // You must comment out below

// void	*my_hello(void *content)
// {
// 	(void)content;
// 	return (ft_strdup("Hello"));
// }

// int	main(void)
// {
// 	t_list	**old_lst;
// 	t_list	*new_lst_head;
// 	t_list	*first_node;
// 	t_list	*second_node;

// 	printf(" --- create nodes and link with list --- \n");
// 	first_node = ft_lstnew(ft_strdup("first"));
// 	second_node = ft_lstnew(ft_strdup("second"));
// 	old_lst = &first_node;
// 	ft_lstadd_back(old_lst, second_node);
// 	printf(" --- start check --- \n");
// 	printf(" (*lst)->content	: %s \n", (char *)((*old_lst)->content));
// 	printf(" (*lst)->next->content	: %s \n",
// 			(char *)((*old_lst)->next->content));
// 	printf(" --- start lstmap with my_hello and free --- \n");
// 	new_lst_head = ft_lstmap((*old_lst), my_hello, free);
// 	printf(" --- complete lstmap --- \n");
// 	printf(" --- start check --- \n");
// 	printf(" (*lst)->content	: %s \n", (char *)(new_lst_head->content));
// 	printf(" (*lst)->next->content	: %s \n",
// 			(char *)(new_lst_head->next->content));
// }
