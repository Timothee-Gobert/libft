/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:13:52 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/30 12:09:36 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdlib.h>
// #include <string.h>

// char	fonction_plus(unsigned int i, char c)
// {
// 	i = i + 0;
// 	return (c += 1);
// }

// char	fonction_moins(unsigned int i, char c)
// {
// 	i = i + 0;
// 	return (c -= i);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	i;

	dest = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%s", ft_strmapi("bcdef", fonction_plus));
// 	return (0);
// }