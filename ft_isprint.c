/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:00:25 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/15 05:50:16 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(unsigned char c)
{
	return (' ' <= c && c <= '~');
}

// #include <stdio.h>
// #include <ctype.h>

// /*
// Fonction isprint :
// Valeur de retour

// La valeur de retour doit être interprétée en tant que valeur booléenne. Une 
// valeur positive non nulle signifira qu'il s'agit bien d'un caractère  
// affichable. La valeur 0 indiquera qu'il ne s'agit pas d'un caractère 
// affichable. 
// */

// int main(void){
// 	printf("ft_isprint = a is ascii   : %d \n",ft_isprint('a'));
// 	printf("isprint    = a is ascii   : %d \n",isprint('a'));
// 	printf("ft_isprint = 0 is ascii   : %d \n",ft_isprint(0));
// 	printf("isprint    = 0 is ascii   : %d \n",isprint(0));
// 	printf("ft_isprint = 50 is ascii  : %d \n",ft_isprint(50));
// 	printf("isprint    = 50 is ascii  : %d \n",isprint(50));
// 	printf("ft_isprint = 250 is ascii : %d \n",ft_isprint(250));
// 	printf("isprint    = 250 is ascii : %d \n",isprint(250));
// 	printf("ft_isprint = -25 is ascii : %d \n",ft_isprint(-25));
// 	printf("isprint    = -25 is ascii : %d \n",isprint(-25));
// 	return (0);
// }
