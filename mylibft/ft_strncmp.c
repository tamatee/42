/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:15:10 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/22 14:02:42 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*dst;

	ptr = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	while (n)
	{
		if (!*ptr || !*dst || *ptr != *dst)
			return (*ptr - *dst);
		ptr++;
		dst++;
		n--;
	}
	return (0);
}
