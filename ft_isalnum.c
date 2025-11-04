/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:21:23 by tgobert           #+#    #+#             */
/*   Updated: 2025/11/02 19:01:08 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'));
}

// #include <stdio.h>
// #include <ctype.h>

// /*
// Fonction isalpha :
// Valeur de retour

// La valeur de retour doit être interprétée en tant que valeur booléenne. Une 
// valeur positive non nulle signifira qu'il s'agit bien d'un caractère  
// alphanumerique. La valeur 0 indiquera qu'il ne s'agit pas d'un caractère 
// alphanumerique. 
// */

// int	main(void)
// {
// 	printf("ft_isalnum = a is ascii   : %d \n", ft_isalnum('a'));
// 	printf("isalnum    = a is ascii   : %d \n", isalnum('a'));
// 	printf("ft_isalnum = 250 is ascii : %d \n", ft_isalnum(250));
// 	printf("isalnum    = 250 is ascii : %d \n", isalnum(250));
// 	printf("ft_isalnum = 50 is ascii  : %d \n", ft_isalnum(50));
// 	printf("isalnum    = 50 is ascii  : %d \n", isalnum(50));
// 	return (0);
// }
