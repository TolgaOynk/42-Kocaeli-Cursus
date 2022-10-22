/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toyanik <toyanik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:16:55 by toyanik           #+#    #+#             */
/*   Updated: 2022/10/18 17:50:01 by toyanik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	res = ft_strdup(s);
	if (!res)
		return (NULL);
	while (res[i])
	{
		res[i] = f(i, res[i]);
		i++;
	}
	return (res);
}
/*char my_func(unsigned int i, char str)
{
printf("When turn while loop : index = %d and %c\n", i, str);
char a = 'a';
return str = a;
}

int main()
{
    char str[10] = "samet";
    printf("Default state %s\n", str);
    char *result = ft_strmapi(str, my_func);
    printf("Modified state %s\n", result);
   return 0;
}*/