/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 08:45:46 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/22 10:34:56 by tgobert          ###   ########.fr       */
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
		if ((s[i] == c && s[i - 1] != c) || \
		(i == ft_strlen(s) && s[i - 1] != c))
			nbr++;
		i++;
	}
	return (nbr);
}

// char	**ft_split(char const *s, char c)
// {
// 	count_word(s, c);
// }

int		main(void)
{
	char	*s;
	char	c;

	s = "ca e";
	c = ' ';

	printf("\n resultat : nbr de mots = %d\n", count_word(s, c));
	return (0);
}