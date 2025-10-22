/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:15:48 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/22 07:44:54 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = (char *) malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[i + start];
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char			s[] = "la chaine de laquelle extraire la nouvelle chaine.";
// 	unsigned int	start;
// 	size_t			len;
// 	start = 22;
// 	len = 8;
// 	printf("%s\n", ft_substr(s, start, len));
// 	return (0);
// }
