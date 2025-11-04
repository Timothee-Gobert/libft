/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 06:56:21 by tgobert           #+#    #+#             */
/*   Updated: 2025/11/04 08:54:36 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}

// #include <stdio.h>
// #include <stdlib.h>

// // petite fonction del pour libérer une chaîne
// void del(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *list = NULL;

//     // on crée quelques nœuds avec malloc pour tester del()
//     list = ft_lstnew(strdup("Salut"));
//     ft_lstadd_back(&list, ft_lstnew(strdup("42")));
//     ft_lstadd_back(&list, ft_lstnew(strdup("Le Havre")));

//     printf("Avant clear:\n");
//     for (t_list *tmp = list; tmp; tmp = tmp->next)
//         printf("%s\n", (char *)tmp->content);

//     ft_lstclear(&list, del);

//     if (list == NULL)
//         printf("\nListe bien vidée :white_check_mark:\n");
//     else
//         printf("\nErreur :x:\n");

//     return 0;
// }