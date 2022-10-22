/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toyanik <toyanik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:22:15 by toyanik           #+#    #+#             */
/*   Updated: 2022/10/19 14:34:56 by toyanik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd = open("deneme.txt", 1);
	ft_putstr_fd("tolga", fd);
	printf("%d", fd);
}*/
