/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:32:22 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/28 12:05:06 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	guarda o next antes de libertar
	liberta o conteudo
	liberta o no
	avanca para o proximo
	coloca NULL no final
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("42"));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("Lisboa")));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("School")));
	printf("antes: %s\n", (char *)lst->content);
	ft_lstclear(&lst, del);
	printf("depois: %p\n", lst);
	return (0);
}
*/
