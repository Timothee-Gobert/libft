/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 08:45:46 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/30 15:18:46 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
// #include "libft.h"

int		ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		count_words(const char *s, char c)
{
	int	i;
	int	nbr;

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

int		malloc_words(const char *s, char c, char **back)
{
	int		i;

	i = 0;
	while (*s != 0)
	{
		if (*s != c)
			i++;
		if (*s != c && (*(s+1) == c || *(s+1) == 0))
		{
			*back++ = malloc(sizeof(char)* i + 1);
			if (!back)
				return (0);
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
		if (*s != c && (*(s+1) == c || *(s+1) == '\0'))
		{
			back[i++][j] = '\0';
			printf("%s\n", back[i - 1]);
			j = 0;
		}
		s++;
	}
	back[i] = NULL;
}

void	free_mallocs()
{
	
}

char	**ft_split(char const *s, char c)
{
	char	**back;

	back = malloc(sizeof(char)* count_words(s, c) + 1);
	if (!back)
		return (NULL);
	if (!(malloc_words(s, c, back)))
		return (NULL);
	fill_split(s, c, back);
	return (back);
}

int		main(void)
{
	char	*s;
	char	c;
	char	**tab;
	int		i;
	
	s = "   ca e     ";
	c = ' ';
	i = 0;
	tab = ft_split(s, c);
	printf("\n resultat : nbr de mots = %d\n", count_words(s, c));
	while (tab[i])
	{
		printf("%s\n", tab[i++]);
	}
	return (0);
}