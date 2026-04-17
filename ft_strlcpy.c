/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 14:03:43 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/17 16:30:25 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Descobre tamanho de src
	Se size > 0:
		Enquanto percorrer src e o i < size -1
			dst = src
		coloca '\0'
	Retorna o tamanho de src
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	i = 0;
	len_src = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
/*
int	main(void)
{
	char	str[] = "Joao";
	char	res[3];
	ft_strlcpy(res, str, 3);
	printf("%s", res);
	return (0);
}
*/
