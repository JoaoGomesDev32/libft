/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:08:54 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/28 12:28:09 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;
	t_list	*next;

	current = lst;
	while (current != NULL)
	{
		next = current->next;
		f(current->content);
		current = next;
	}
}
/*
void    print_upper(void *content)
{
    char    *str;
    int     i;

    str = (char *)content;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
    printf("%s\n", str);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&lst,ft_lstnew(ft_strdup("world")));
	ft_lstiter(lst, print_upper);
	return (0);
}
*/