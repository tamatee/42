/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:55:54 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/15 15:47:02 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (s == d || len == 0)
		return (dest);
	if (d > s)
	{
		while (len-- > 0)
			d[len] = s[len];
		return (dest);
	}
	ft_memcpy(dest, src, len);
	return (dest);
}
