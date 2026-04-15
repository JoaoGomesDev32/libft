/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:40:23 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/15 19:14:11 by joagomes         ###   ########.fr       */
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
	ft_memset(str, 'X', 5);
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", str[i]);
	}
	return (0);
}
*/
