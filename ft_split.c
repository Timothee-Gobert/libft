/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 08:45:46 by tgobert           #+#    #+#             */
/*   Updated: 2025/11/04 11:16:08 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(const char *s, char c)
{
	size_t	i;
	int		nbr;

	nbr = 0;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			nbr++;
		i++;
	}
	return (nbr);
}

////////
#include <stdio.h>  
////////  
int		malloc_words(const char *s, char c, char **back)
{
	int		i;

	i = 0;
	while (*s != 0)
	{
		if (*s != c)
			i++;
		if (*s != c && (*(s + 1) == c || *(s + 1) == 0))
		{
			// printf("malloc_words: i: %d\n", i);
			*back++ = malloc(sizeof(char)* ++i);
			if (!back)
				return (0);
			// (*back)[i] = '\0';
			i = 0;
		}
		s++;
	}
	return (1);
}

static void	fill_split(const char *s, char c, char **back)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c)
			back[i][j++] = *s;
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
		{
			back[i++][j] = '\0';
			j = 0;
		}
		s++;
	}
	back[i] = NULL;
}

char	**free_mallocs(char **back)
{
	int	i;

	if (!back)
		return (NULL);
	i = 0;
	while (back[i])
	{
		free(back[i]);
		i++;
	}
	free(back);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**back;

	back = malloc(sizeof(char)*count_words(s, c) + 1);
	if (!back)
		return (NULL);
	if (!(malloc_words(s, c, back)))
	{
		free_mallocs(back);
		return (NULL);
	}
	fill_split(s, c, back);
	return (back);
}
