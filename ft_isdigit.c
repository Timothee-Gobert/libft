/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:44:20 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/15 05:50:11 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// #include <stdio.h>
// #include <ctype.h>

// /*
// Fonction isdigit :
// Valeur de retour

// La valeur de retour doit être interprétée en tant que valeur booléenne.
// Une valeur positive non nulle signifira qu'il s'agit bien d'un caractère 
// numérique. 
// La valeur 0 indiquera qu'il ne s'agit pas d'un caractère numérique. 
// */

// int main(void){
// 	printf("ft_isdigit = '0' is ascii   : %d \n",ft_isdigit('0'));
// 	printf("isdigit    = '0' is ascii   : %d \n",isdigit('0'));
// 	printf("ft_isdigit = 50 is ascii   : %d \n",ft_isdigit(50));
// 	printf("isdigit    = 50 is ascii   : %d \n",isdigit(50));
// 	printf("ft_isdigit = 99 is ascii  : %d \n",ft_isdigit(99));
// 	printf("isdigit    = 99 is ascii   : %d \n",isdigit(99));
// 	printf("ft_isdigit = 'a' is ascii   : %d \n",ft_isdigit('a'));
// 	printf("isdigit    = 'a' is ascii   : %d \n",isdigit('a'));
// 	return (0);
// }
