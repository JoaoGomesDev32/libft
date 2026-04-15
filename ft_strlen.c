/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 12:14:41 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/15 14:26:41 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Começa com um contador = 0
    Vai olhando cada caractere da string
    Enquanto o caractere NÃO for '\0':
    incrementa o contador
    Quando encontrar '\0':
    para
    retorna o contador
*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
    char    *str;

    str = "42 Lisboa!";
    printf("%zu\n", ft_strlen(str));
    return (0);
}
*/
