/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_supp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inox <inox@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:28:28 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/21 22:03:19 by inox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char	*s1;
	char	*s2;
	char	*set; 

	s1 = "un";
	s2 = "deux";
	printf("Test de la fonction ft_strjoin avec\n\
		s1 = 'un'\n\
		s2 = 'deux'\n");
	
	printf("resultat = %s\n",ft_strjoin(s1, s2));

	s1 = "xxtestxx";
	set = "xx";
	printf("\nTest de la fonction ft_strtrim avec\n\
		s1 = 'xxtestxx'\n\
		set = 'xx'\n");

	printf("resultat = %s\n",ft_strtrim(s1, set));
	return 0;
}
