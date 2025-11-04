/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 10:40:59 by tgobert           #+#    #+#             */
/*   Updated: 2025/11/03 10:30:00 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	// --- Test avec un int ---
// 	int		*num = malloc(sizeof(int));
// 	if (!num)
// 		return 0; 
// 	*num = 42;

// 	t_list	*node_int = ft_lstnew(num);
// 	if (!node_int)
// 	{
// 		free(num);
// 		return 0;
// 	}

// 	printf("Int node content: %d\n", *(int *)node_int->content);
// 	printf("Int node next: %p\n", (void *)node_int->next);

// 		// --- Test avec une chaîne ---
// 	char	*str = "hello";
// 	t_list	*node_str = ft_lstnew(str);

// 	printf("String node content: %s\n", (char *)node_str->content);
// 	printf("String node next: %p\n", (void *)node_str->next);

// 	free(num);
// 	free(node_int);
// 	free(node_str);

// 	return 0;
// }