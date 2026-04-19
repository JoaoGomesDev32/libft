/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 10:48:30 by joaog             #+#    #+#             */
/*   Updated: 2026/04/19 11:32:51 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	percorrer n bytes
		se byte == c
			retorna ponteiro
	retorna NULL
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	data[] = {'a', 'b', '\0', 'c', 'd'};
	char	*res = ft_memchr(data, 'd', 5);

	if (res)
		printf("%c\n", *res);
	return (0);
}
*/