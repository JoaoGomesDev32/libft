/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 14:03:05 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/22 11:20:17 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	percorrer a string
		se encontrar c -> retorna ponteiro
	se chegar no final:
		se c == '\0' -> retorna ponteiro final
	senao -> NULL
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

int	main(void)
{
	char *str = "abcde";
	char	*res;

	res = ft_strchr(str, 'c');
	printf("%s\n", res);

	res = ft_strchr(str, 'z');
	if (res)
		printf("%s\n", res);
	else
		printf("NULL\n");

	res = ft_strchr(str, '\0');
	printf("%s\n", res);

	return 0;
}

