/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toyanik <toyanik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:28:29 by toyanik           #+#    #+#             */
/*   Updated: 2022/10/08 14:45:32 by toyanik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsz)
{
	size_t	srcsz;
	size_t	i;

	if (!dest || !src)
		return (0);
	srcsz = ft_strlen(src);
	i = 0;
	if (destsz != 0)
	{
		while (src[i] != '\0' && i < (destsz - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsz);
}
