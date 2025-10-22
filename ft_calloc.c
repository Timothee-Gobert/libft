/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:50:25 by tgobert           #+#    #+#             */
/*   Updated: 2025/10/22 07:46:13 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*calloced;

	calloced = (void *) malloc(nmemb * size);
	if (!calloced)
		return (NULL);
	ft_bzero(calloced, nmemb);
	return (calloced);
}
