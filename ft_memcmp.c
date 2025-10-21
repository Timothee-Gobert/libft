/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 07:47:32 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/17 08:24:04 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
// 	printf("ft_memcmp 'abc', 'abc', 3 = %d\n",ft_memcmp("abc", "abc", 3));
// 	printf("   memcmp 'abc', 'abc', 3 = %d\n",   memcmp("abc", "abc", 3));
// 	printf("ft_memcmp 'abc', 'abc', 4 = %d\n",ft_memcmp("abc", "abc", 4));
// 	printf("   memcmp 'abc', 'abc', 4 = %d\n",   memcmp("abc", "abc", 4));
// 	printf("ft_memcmp 'abc', 'abd', 3 = %d\n",ft_memcmp("abc", "abd", 3));
// 	printf("   memcmp 'abc', 'abd', 3 = %d\n",   memcmp("abc", "abd", 3));
// 	printf("ft_memcmp 'abc', 'abb', 3 = %d\n",ft_memcmp("abc", "abb", 3));
// 	printf("   memcmp 'abc', 'abb', 3 = %d\n",   memcmp("abc", "abb", 3));
// 	printf("ft_memcmp 'abc', 'abb', 2 = %d\n",ft_memcmp("abc", "abb", 2));
// 	printf("   memcmp 'abc', 'abb', 2 = %d\n",   memcmp("abc", "abb", 2));

// 	return (0);
// }
