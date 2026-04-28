/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:40:23 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/28 16:51:21 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Recebo um endereco de memoria (s)
	Quero tratar como sequencia de bytes
	Para cada byte ate n:
		substituir pelo valor c
	Retornar o ponteiro original
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
int main(void)
{
    char str[10];
    int  i;

    ft_memset(str, 'X', 5);
    str[5] = '\0';
    i = 0;
    while (i < 5)
    {
        printf("%c ", str[i]);
        i++;
    }
    printf("\n");
    return (0);
}
*/