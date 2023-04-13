/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <teecharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:51:19 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/29 13:05:24 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	len2;
	char	*res;

	if (!s2 || !s1)
		return (NULL);
	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = ft_calloc(1, (len + len2 + 1));
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, len);
	ft_memcpy(res + len, s2, len2);
	return (res);
}
