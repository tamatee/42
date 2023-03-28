/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <teecharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:51:19 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/24 18:08:10 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char		*res;

	len = ft_strlen(s1);
	if (!s2 || !s1)
		return (NULL);
	res = ft_calloc(1, len + ft_strlen(s2));
	while (*s1)
		*res++ = *s1++;
	while (*s2)
		*res++ = *s2++;
	return (res);
}
