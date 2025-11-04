/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:51:32 by tgobert           #+#    #+#             */
/*   Updated: 2025/11/03 07:50:22 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	i = ft_strlen(s1) - 1;
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
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) - find_set_start(s1, set) - find_set_end(s1, set);
	trimmed = malloc(sizeof(char) * len + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[find_set_start(s1, set) + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
