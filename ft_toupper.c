/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 07:48:36 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/16 08:31:10 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 32;
	return (c);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("a after ft_toupper = %c\n", ft_toupper('a'));
// 	printf("A after ft_toupper = %c\n", ft_toupper('A'));
// 	printf("; after ft_toupper = %c\n", ft_toupper(';'));
// 	return 0;
// }
