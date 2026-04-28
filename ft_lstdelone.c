/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:25:37 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/28 16:21:12 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Recebe um no e uma funcao del
	liberta o conteudo do no atual
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("Hello!"));
	printf("antes: %s\n", (char *)lst->content);
	ft_lstdelone(lst, del);
	printf("libertado!\n");
	return (0);
}
*/