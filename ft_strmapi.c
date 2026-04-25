/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:05:31 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/25 08:30:11 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1. aloca strlen(s) + 1 bytes
2. percorre s com índice i
3. res[i] = f(i, s[i])
4. res[len] = '\0'
5. retorna res
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len_s;
	char	*res;
	int		i;

	len_s = ft_strlen(s);
	res = malloc(sizeof(char) * (len_s + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[len_s] = '\0';
	return (res);
}
/*
static char	ft_toupper_indexed(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (c - 32 * (c >= 'a' && c <= 'z'));
    return (c);
}

int main(void)
{
    char *res;

    // Teste 1 — toupper nos índices pares
    res = ft_strmapi("hello", ft_toupper_indexed);
    printf("Teste 1: %s\n", res);
    free(res);

    // Teste 2 — string vazia
    res = ft_strmapi("", ft_toupper_indexed);
    printf("Teste 2: '%s'\n", res);
    free(res);

    return (0);
}
*/
