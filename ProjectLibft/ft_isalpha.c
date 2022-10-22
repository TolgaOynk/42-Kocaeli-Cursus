/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toyanik <toyanik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:57:46 by toyanik           #+#    #+#             */
/*   Updated: 2022/10/19 10:04:30 by toyanik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	return (0);
}