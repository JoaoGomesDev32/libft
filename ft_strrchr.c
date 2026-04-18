/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 15:42:23 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/18 16:11:10 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	percorrer a string de traz para frente
	se encontrar c -> retorna ponteiro
	se chegar no final:
	se c == '\0' -> retorna ponteiro final
	senao -> NULL
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "abcbdefe";
	char	*res;

	res = ft_strrchr(str, 'b');
	printf("%s\n", res);
	return (0);
}
*/
