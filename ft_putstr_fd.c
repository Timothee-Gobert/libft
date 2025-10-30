/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 07:00:52 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/30 08:27:13 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
	{
		return ((void) NULL);
	}
	while (*s)
		write(fd, s++, 1);
}

// int main(void)
// {
// 	ft_putstr_fd("trankilement a base de trankilup", 1);
// 	return (0);
// }