/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <teecharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:18:34 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/24 12:36:05 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		tmp_I
	size_t			l;

	l = len + 1;
	res = ft_calloc(1, l);
	tmp_I = (int)start;
	while (len-- > 0)
	{
		res[tmp_I] = s[tmp_I];
		tmp_I++;
		len--;
	}
	return (res);
}
