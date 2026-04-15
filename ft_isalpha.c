/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:39:33 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/15 15:23:10 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Se estiver entre 'A' a 'Z'
		E estiver entre 'a' a 'z'
			retorna 1
	senao retorna 0 
*/

#include "libft.h"

int	ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('5'));
	return (0);
}
*/
