/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:20:01 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/27 14:37:42 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
}

int main(void)
{
	{
		t_list  *lst;
		t_list  *node;
	
		lst = ft_lstnew("world");
		node = ft_lstnew("hello");
		ft_lstadd_back(&lst, node);
		printf("primeiro: %s\n", (char *)lst->content);
		printf("segundo: %s\n", (char *)lst->next->content);
		free(lst->next);
		free(lst);
		return (0);
	}
}