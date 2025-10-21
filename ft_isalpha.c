/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:07:18 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/20 10:01:43 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

// #include <stdio.h>
// #include <ctype.h>

// /*
// Fonction isalpha :
// Valeur de retour

// La valeur de retour doit être interprétée en tant que valeur booléenne. 
// Une valeur positive non nulle signifira qu'il s'agit bien d'un caractère
// alphabétique. La valeur 0 indiquera qu'il ne s'agit pas d'un caractère
// alphabétique. 
// */

// int main(void)
// {
// 	printf("ft_isalpha = c is isalpha   : %d \n", ft_isalpha('c'));
// 	printf("isalpha    = c is isalpha   : %d \n", isalpha('c'));
// 	printf("ft_isalpha = 250 is isalpha : %d \n", ft_isalpha(250));
// 	printf("isalpha    = 250 is isalpha : %d \n", isalpha(250));
// 	printf("ft_isalpha = 50 is isalpha  : %d \n", ft_isalpha(50));
// 	printf("isalpha    = 50 is isalpha  : %d \n", isalpha(50));
// 	printf("ft_isalpha = 97 is isalpha  : %d \n", ft_isalpha(98));
// 	printf("isalpha    = 97 is isalpha  : %d \n", isalpha(98));
// 	return (0);
// }
