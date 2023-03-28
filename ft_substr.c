/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <teecharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:18:34 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/24 14:33:13 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t		tmp_I;
	size_t		l;

	l = len;
	if(!s)
		return (NULL);
	if (start > ft_strlen(s))
		l = 0;
	else if (ft_strlen(s) - start < len)
		l = ft_strlen(s) - start;
	res = (char *)ft_calloc(1, l + 1);
	if (!res)
		return (NULL);
	tmp_I = (int)start;
	while (tmp_I < ft_strlen(s) && (tmp_I - start) < l)
	{
		res[tmp_I - start] = s[tmp_I];
		tmp_I++;
	}
	return (res);
}
