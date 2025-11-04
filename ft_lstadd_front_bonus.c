/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 10:15:18 by tgobert           #+#    #+#             */
/*   Updated: 2025/11/03 13:01:13 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	// --- Création de nœuds existants ---
// 	int *num = malloc(sizeof(int));
// 	if (!num) return 1;
// 	*num = 42;
// 	t_list *node_int = ft_lstnew(num);

// 	char *str = "hello";
// 	t_list *node_str = ft_lstnew(str);

// 	// --- Création de la liste ---
// 	t_list *list = node_int;       // node_int est le premier élément
// 	node_int->next = node_str;     // node_str devient le deuxième

// 	// --- Nouveau nœud à ajouter en tête ---
// 	char *letter = "A";
// 	t_list *node_char = ft_lstnew(letter);
// 	ft_lstadd_front(&list, node_char);

// // --- Parcours de la liste pour afficher le contenu ---
// t_list *tmp = list;
// while (tmp)
// {
// 	if (tmp->content == num)
// 		printf("Int: %d\n", *(int *)tmp->content);
// 	else
// 		printf("String: %s\n", (char *)tmp->content);
// 	tmp = tmp->next;
// }

// 	// --- Libération mémoire ---
// 	free(num);
// 	free(node_int);
// 	free(node_str);
// 	free(node_char);

// 	return 0;
// }