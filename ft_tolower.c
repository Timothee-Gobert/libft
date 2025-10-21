/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 08:33:19 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/16 08:39:51 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 32;
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("a after ft_tolower = %c\n", ft_tolower('a'));
// 	printf("A after ft_tolower = %c\n", ft_tolower('A'));
// 	printf("; after ft_tolower = %c\n", ft_tolower(';'));
// 	return 0;
// }
