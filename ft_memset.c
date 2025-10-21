/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:38:23 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/15 10:27:49 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int	i;
// 	char	data_ft[] = {10, 25, 30, 45};
// 	char	data[] = {97, 97, 97, 97};
// 	ft_memset(data_ft, 0, 2);
// 	memset(data, 0, 2);
// 	i = 0;
// 	while(i < 4)
// 	{
// 		printf("data[%d] = %d\n", i, data[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while(i < 4)
// 	{
// 		printf("data_ft[%d] = %d\n", i, data_ft[i]);
// 		i++;
// 	}
// 	return (0);
// }