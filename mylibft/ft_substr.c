/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <teecharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:18:34 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/29 13:08:36 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	l;
	size_t	ti;

	l = len;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		l = 0;
	else if (ft_strlen(s) - start < len)
		l = ft_strlen(s) - start;
	res = (char *)ft_calloc(1, l + 1);
	if (!res)
		return (NULL);
	ti = (int)start;
	while (ti < ft_strlen(s) && (ti - start) < l)
	{
		res[ti - start] = s[ti];
		ti++;
	}
	return (res);
}
