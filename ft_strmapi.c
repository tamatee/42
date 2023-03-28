/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:28:08 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/28 12:35:58 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char		*res;

	i = -1;
	if (!s)
		return (0);
	res = ft_calloc(1, ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	while (++i < ft_strlen(s))
		res[i] = f(i, s[i]);
	return (res);
}
