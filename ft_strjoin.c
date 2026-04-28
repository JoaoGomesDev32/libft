/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:49:35 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/28 16:44:49 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	calculas o tamanho total = strlen(s1) + strlen(s2) + 1
	aloca esse espaço com malloc
	copia s1 para o início do resultado
	copia s2 a seguir ao s1
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*result;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len_s1 + 1);
	ft_strlcpy(result + len_s1, s2, len_s2 + 1);
	return (result);
}
/*
int main(void)
{
    char *res;

    // Teste 1 — caso normal
    res = ft_strjoin("Hello, ", "World!");
    printf("Teste 1: %s\n", res);
    free(res);

    // Teste 2 — string vazia
    res = ft_strjoin("", "World!");
    printf("Teste 2: %s\n", res);
    free(res);

    // Teste 3 — outra string vazia
    res = ft_strjoin("Hello, ", "");
    printf("Teste 3: %s\n", res);
    free(res);

    // Teste 4 — ambas vazias
    res = ft_strjoin("", "");
    printf("Teste 4: %s\n", res);
    free(res);

    return (0);
}
*/