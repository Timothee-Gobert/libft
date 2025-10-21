/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 08:45:14 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/16 16:48:04 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	to[] = "je suis à la recherche d'un truc ici";

// 	printf("retour ft_strchr aves 's' = %s\n",ft_strchr(to, 's'));
// 	printf("retour    strchr aves 's' = %s\n",   strchr(to, 's'));
// 	printf("retour ft_strchr aves 'h' = %s\n",ft_strchr(to, 'h'));
// 	printf("retour    strchr aves 'h' = %s\n",   strchr(to, 'h'));
// 	printf("retour ft_strchr aves 'r' = %s\n",ft_strchr(to, 'r'));
// 	printf("retour    strchr aves 'r' = %s\n",   strchr(to, 'r'));
// 	printf("retour ft_strchr aves 'x' = %s\n",ft_strchr(to, 'x'));
// 	printf("retour    strchr aves 'x' = %s\n",   strchr(to, 'x'));
// 	return (0);
// }