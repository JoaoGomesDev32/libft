/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:41:04 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/28 16:32:57 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		len_lst;

	len_lst = 0;
	current = lst;
	while (current != NULL)
	{
		current = current->next;
		len_lst++;
	}
	return (len_lst);
}
/*
int main(void)
{
	{
		t_list  *lst;
		t_list  *node;
		int len;
	
		lst = ft_lstnew("world");
		node = ft_lstnew("hello");
		ft_lstadd_back(&lst, node);
		len = ft_lstsize(lst);
		printf("Tamanho: %d\n", len);
		free(lst->next);
		free(lst);
		return (0);
	}
}
*/
