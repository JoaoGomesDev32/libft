/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 19:38:54 by joagomes          #+#    #+#             */
/*   Updated: 2026/05/06 16:02:29 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Preenche os primeiros nbytes da área de memória 
apontado por s com zero
	Recebo um endereco de memoria (s)
	Quero tratar como sequencia de bytes
	Para cada byte ate n:
		substituir pelo valor 0
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char str[10] = "abcdefghi";
	ft_bzero(str, 5);
	for (int i = 0; i < 10; i++)
	{
		printf("%c ", str[i]);
	}
	return (0);
}
*/
