/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 08:34:27 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/30 12:10:18 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n / -10, fd);
		ft_putnbr_fd(-1 * (n % 10), fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		n += '0';
		write(fd, &n, 1);
	}
}

// int main(void)
// {
// 	ft_putnbr_fd(-42424242, 1);
// 	return (0);
// }
