/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 07:41:22 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/16 08:48:50 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		size -= 1;
		while (src[i] && i < size)
		{
			if (i < size)
				dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// pour le lancer il faut faire la commande
//             cc -lbsd ft.c
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

// #include <stdio.h>
// #include <bsd/string.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char			dest[10];
// 	unsigned int	n;
// 	char			x[] = "timothee";

// 	n = 5;

// 	// printf("strlcpy - %d\n", strlcpy(dest, x, n));
// 	printf("ft_strlcpy - %zu\n", ft_strlcpy(dest, x, n));
// 	// printf("strlcpy - %d\n", strlcpy(dest, x, n));
// 	printf("ft_strlcpy - %zu\n", ft_strlcpy(dest, x, n));
// 	return (0);
// }