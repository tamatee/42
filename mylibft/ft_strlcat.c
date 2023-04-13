/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:49:05 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/22 15:44:11 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		len;
	size_t		cnt;

	d = dst;
	s = src;
	cnt = dstsize;
	while (cnt-- > 0 && *dst)
		dst++;
	len = dst - d;
	cnt = dstsize - len;
	if (cnt-- == 0)
		return (len + ft_strlen(src));
	while (*src)
	{
		if (cnt > 0)
		{
			*dst++ = *src;
			cnt--;
		}
		src++;
	}
	*dst = '\0';
	return (len + (src - s));
}
