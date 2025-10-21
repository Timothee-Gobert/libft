/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 07:02:38 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/16 14:54:07 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("ft_strlen : vide    : %zu \n", ft_strlen(""));
// 	printf("strlen    : vide    : %zu \n", strlen(""));
// 	printf("----------+---------+-----\n");
// 	printf("ft_strlen : 'test'  : %zu \n", ft_strlen("test"));
// 	printf("strlen    : 'test'  : %zu \n", strlen("test"));
// 	printf("----------+---------+-----\n");
// 	printf("ft_strlen : 'test2' : %zu \n", ft_strlen("test2"));
// 	printf("strlen    : 'test2' : %zu \n", strlen("test2"));
// 	return (0);
// }
