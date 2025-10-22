/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:51:32 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/22 20:15:06 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	find_set_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int	nbr;
	int	temp;

	temp = -1;
	nbr = 0;
	i = 0;
	while (i < ft_strlen(s1) && temp != nbr)
	{
		temp = nbr;
		j = 0;
		while (j <= ft_strlen(set))
		{
			if (set[j] == s1[i])
			{
				nbr++;
				j = ft_strlen(set) -1;
			}
			j++;
		}
		i++;
	}
	return (nbr);
}

int	find_set_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	int	nbr;
	int	temp;

	temp = -1;
	nbr = 0;
	i = ft_strlen(s1);
	while (i > 0 && temp != nbr)
	{
		temp = nbr;
		j = 0;
		while (j <= ft_strlen(set))
		{
			if (set[j] == s1[i])
			{
				nbr++;
				j = ft_strlen(set) -1;
			}
			j++;
		}
		i--;
	}
	return (nbr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;

	trimmed = NULL;
	printf("%d\n", find_set_start(s1, set));
	printf("%d\n", find_set_end(s1, set));
	return (trimmed);
}
