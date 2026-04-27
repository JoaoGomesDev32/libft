/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:58:42 by joagomes          #+#    #+#             */
/*   Updated: 2026/04/27 11:15:32 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len_s;

	len_s = ft_strlen(s);
	write (fd, s, len_s);
	write (fd, "\n", 1);
}
/*
int	main(void)
{
	char	*str = "42 Lisboa";
	ft_putendl_fd(str, 1);
	printf("%s", str);
	return (0);
}
*/