/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:01:32 by tgobert           #+#    #+#             */
/*   Updated: 2025/11/04 08:52:53 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return;
	del(lst->content);
	free(lst);
}

// int main() {
// 	char *strs[] = { "42", "Le", "Havre" };
// 	t_list	*lst = ft_lstnew(ft_strdup(strs[0]));
// 	lst->next = ft_lstnew(ft_strdup(strs[1]));
// 	lst->next->next = ft_lstnew(ft_strdup(strs[2]));
// 	ft_lstdelone(lst->next->next, free);
// 	ft_lstdelone(lst->next, free);
// 	ft_lstdelone(lst, free);
// }
