/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:44:20 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/15 05:50:06 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void){
// 	printf("ft_isascii = a is ascii   : %d \n",ft_isascii('a'));
// 	printf("isascii    = a is ascii   : %d \n",isascii('a'));
// 	printf("ft_isascii = 0 is ascii   : %d \n",ft_isascii(0));
// 	printf("isascii    = 0 is ascii   : %d \n",isascii(0));
// 	printf("ft_isascii = 50 is ascii  : %d \n",ft_isascii(50));
// 	printf("isascii    = 50 is ascii  : %d \n",isascii(50));
// 	printf("ft_isascii = 250 is ascii : %d \n",ft_isascii(250));
// 	printf("isascii    = 250 is ascii : %d \n",isascii(250));
// 	printf("ft_isascii = -25 is ascii : %d \n",ft_isascii(-25));
// 	printf("isascii    = -25 is ascii : %d \n",isascii(-25));
// 	return (0);
// }
