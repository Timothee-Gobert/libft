/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 08:24:18 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/30 12:18:38 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
	{
		return ((void) NULL);
	}
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}

// int main(void)
// {
// 	ft_putendl_fd("trankilement a base de trankilup", 1);
// 	return (0);
// }