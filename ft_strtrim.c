/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:23:51 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/22 07:45:21 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	find_set(char const *s1, char const *set)
{
	size_t		del;
	size_t		i;
	size_t		j;

	del = 0;
	i = -1;
	j = 0;
	while (++i < ft_strlen(set))
	{
		if (s1[i] == set[i])
			j++;
	}
	if (j == ft_strlen(set))
		del++;
	i = ft_strlen(s1) - ft_strlen(set) - 1;
	j = 0;
	while (++i < ft_strlen(s1))
	{
		if (s1[i] == set[j])
			j++;
	}
	if (j == ft_strlen(set))
		del++;
	return (del);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	len;
	size_t	start;
	size_t	i;

	len = (ft_strlen(s1) - (ft_strlen(set) * find_set(s1, set)));
	trimmed = malloc(sizeof(char) * len + 1);
	i = -1;
	start = 0;
	while (++i < ft_strlen(set))
	{
		if (s1[i] == set[i])
			start++;
	}
	if (start != ft_strlen(set))
		start = 0;
	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	return (trimmed);
}
