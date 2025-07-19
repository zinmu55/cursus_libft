/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shintarokohtake <shintarokohtake@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:41:39 by skohtake          #+#    #+#             */
/*   Updated: 2025/07/19 10:57:44 by shintarokoh      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}

// /* comment out required below */

// int	main(void)
// {
// 	char	s[] = "Hello, world!";

// 	ft_putstr_fd(s, 1);
// }
