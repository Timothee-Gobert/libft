/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:28:04 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/15 14:06:01 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s2[i] != '\0' && i < n)
	{
		return (0 - s2[i + 1]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	size_t	n;

// 	n = 4;
//printf("strncmp    abcdef, accdef %d \n", strncmp(   "abcdef", "accdef", n));
//printf("ft_strncmp abcdef, accdef %d \n", ft_strncmp("abcdef", "accdef", n));
//printf("strncmp    abcdef, aacdef %d \n", strncmp(   "abcdef", "aacdef", n));
//printf("ft_strncmp abcdef, aacdef %d \n", ft_strncmp("abcdef", "aacdef", n));
//printf("strncmp    abcdef, abcdef %d \n", strncmp(   "abcdef", "abcdef", n));
//printf("ft_strncmp abcdef, abcdef %d \n", ft_strncmp("abcdef", "abcdef", n));
//printf("strncmp    abcdef, abcdeg %d \n", strncmp(   "abcdef", "abcdeg", n));
//printf("ft_strncmp abcdef, abcdeg %d \n", ft_strncmp("abcdef", "abcdeg", n));
//return (0);
// }