/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 08:57:44 by tgobert           #+#    #+#             */
/*   Updated: 2025/11/04 09:12:47 by tgobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int main(void)
// {
// 	char *strs[] = { "42", "Le", "Havre" };
// 	t_list	*lst = ft_lstnew(ft_strdup(strs[0]));
// 	lst->next = ft_lstnew(ft_strdup(strs[1]));
// 	lst->next->next = ft_lstnew(ft_strdup(strs[2]));

// 	ft_lstiter(lst, print_content);

// 	return 0;
// }
