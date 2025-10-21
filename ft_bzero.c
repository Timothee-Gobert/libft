/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 08:49:44 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/15 10:27:08 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}

// #include <strings.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	test[] = "AAAA";
// 	char	test_ft[] = "AAAA";
// 	int		i;

// 	ft_bzero(test_ft, 2);
// 	bzero(test,2);
// 	i = 0;
// 	printf("résultat de ft_bzero :\n");
// 	while (i < 4)
// 	{
// 		printf("%c", test_ft[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	printf("résultat de bzero :\n");
// 	while (i < 4)
// 	{
// 		printf("%c", test[i]);
// 		i++;
// 	}
// 	return (0);
// }
