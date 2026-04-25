/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 09:37:07 by joaog             #+#    #+#             */
/*   Updated: 2026/04/25 09:52:36 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len_s;

	len_s = ft_strlen(s);
	write(fd, s, len_s);
}
/*
int main(void)
{
	ft_putstr_fd("Felipe\n", 1);
	return (0);
}
*/
