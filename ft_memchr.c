/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:31:42 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/19 17:24:20 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && i < ft_strlen(s))
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	list[] = {65, 67, 66, 66, 98};
// 	int		c = 66;
// 	printf("   memchr = %d\n",    *(int *)memchr(list, c, 5));
// 	printf("ft_memchr = %d\n", *(int *)ft_memchr(list, c, 5));
// 	return (0);
// }
