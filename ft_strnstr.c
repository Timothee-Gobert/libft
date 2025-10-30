/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 08:31:07 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/30 11:27:43 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big)
		return (NULL);
	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && j < ft_strlen(little))
		{
			if (j == ft_strlen(little) - 1)
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int main(void)
// {
// 	char *big;
// 	char *lit;

// 	big = "je vais rechercher un un truc vers ici histoire de";
// 	lit = "un truc";
// 	printf("on cherhe 'un truc'\n");
// 	printf("dans 'je vais rechercher un un truc vers ici histoire de'\n\n");
// 	printf("   strnstr 29 = %s\n",    strnstr(big, lit, 28));
// 	printf("ft_strnstr 29 = %s\n", ft_strnstr(big, lit, 28));
// 	printf("   strnstr 30 = %s\n",   strnstr(big, lit, 29));
// 	printf("ft_strnstr 30 = %s\n", ft_strnstr(big, lit, 29));
// 	printf("   strnstr 50 = %s\n",    strnstr(big, lit, 30));
// 	printf("ft_strnstr 50 = %s\n", ft_strnstr(big, lit, 30));
// 	big = "lorem ipsum dolor sit amet";
// 	lit = "";
// 	printf("   strnstr 10 = %s\n",    strnstr(big, lit, 10));
// 	printf("ft_strnstr 10 = %s\n", ft_strnstr(big, lit, 10));
// }
