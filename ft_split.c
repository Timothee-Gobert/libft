/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 08:45:46 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/24 16:40:50 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
// #include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		count_word(const char *s, char c)
{
	int	i;
	int nbr;
	
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

int		*malloc_words(const char *s, char c, char **back)
{
	int j;
	
	j = 0;
	while (*i <= ft_strlen(s))
	{
		if (s[*i] != c && (s[*i + 1] == c || s[*i + 1] == 0))
		{
			
		}
		i++;
		j++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**back;

	back = malloc(sizeof(char)* count_word(s, c) + 1);
	
	return (back);
}

int		main(void)
{
	char	*s;
	char	c;

	s = "   ca e     ";
	c = ' ';

	printf("\n resultat : nbr de mots = %d\n", count_word(s, c));
	return (0);
}