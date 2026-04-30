/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:45:41 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/30 13:42:09 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	calcular tamanho de s
	se start >= len_s
		retorna string vazia
	calcular tamanho real a copiar
	malloc (len + 1)
	copiar caracteres
	adicionar '\0'
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	char	*ptr;

	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > len_s - start)
		len = len_s - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len && (start + i) < len_s)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char *str = "Hello World";
	char *res;
	res = ft_substr(str, 6, 5);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/