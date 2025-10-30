/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:13:01 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/30 12:11:04 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// void	ft_hello(unsigned int i, char *s)
// {
// 	printf("hello num %d sur %s \n", i, s);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s);
		i++;
	}
}

// int main(void)
// {
// 	ft_striteri("bcdef", ft_hello);
// 	return (0);
// }