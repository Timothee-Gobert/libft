/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:05:32 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/19 17:08:24 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	while (s[i])
		i++;
	if (s == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * i + 1);
	i = 0;
	if (dest == NULL)
		return (NULL);
	else
	{
		while (s[i])
		{
			dest[i] = s[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

// #include <stdlib.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	*src = ft_strdup("timothee");
// 	printf("%s",src);
// 	free(src);
// 	return (0);
// }