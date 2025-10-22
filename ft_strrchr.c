/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:31:36 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/22 11:36:14 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			p = (char *)s;
		s++;
	}
	if (c == 0)
	{
		return ((char *)s);
	}
	return (p);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	to[] = "je suis à la recherche d'un truc ici";

// 	printf("retour ft_strrchr avec 's' = %s\n",ft_strrchr(to, 's'));
// 	printf("retour    strrchr avec 's' = %s\n",   strrchr(to, 's'));
// 	printf("retour ft_strrchr avec 'h' = %s\n",ft_strrchr(to, 'h'));
// 	printf("retour    strrchr avec 'h' = %s\n",   strrchr(to, 'h'));
// 	printf("retour ft_strrchr avec 'i' = %s\n",ft_strrchr(to, 'i'));
// 	printf("retour    strrchr avec 'i' = %s\n",   strrchr(to, 'i'));
// 	printf("retour ft_strrchr avec 'x' = %s\n",ft_strrchr(to, 'x'));
// 	printf("retour    strrchr avec 'x' = %s\n",   strrchr(to, 'x'));
// 	return (0);
// }
