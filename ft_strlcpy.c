/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:30:44 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/15 15:56:03 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	l;

	l = ft_strlen(src);
	if (l + 1 < dstsize)
	{
		ft_memcpy(dst, src, l + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, l - 1);
		dst[dstsize - 1] = '\0';
	}
	return (l);
}
