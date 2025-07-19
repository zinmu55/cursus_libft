/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shintarokohtake <shintarokohtake@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:23:07 by shintarokoh       #+#    #+#             */
/*   Updated: 2025/07/18 20:46:18 by shintarokoh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst != NULL)
	{
		i++;
		while (lst->next)
		{
			lst = lst->next;
			i++;
		}
	}
	return (i);
}
