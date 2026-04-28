/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:27:51 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/28 16:18:26 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
    t_list  *lst;
    t_list  *node;

    lst = ft_lstnew("world");
    node = ft_lstnew("hello");
    ft_lstadd_front(&lst, node);
    printf("primeiro: %s\n", (char *)lst->content);
    printf("segundo: %s\n", (char *)lst->next->content);
    free(lst->next);
    free(lst);
    return (0);
}
*/
