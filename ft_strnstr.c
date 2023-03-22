/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:19:49 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/22 15:33:20 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*ne;
	size_t	ne_len;

	hay = (char *)haystack;
	ne = (char *)needle;
	if (hay == NULL && len == 0)
		return (NULL);
	if (ft_memcmp(ne, (char *)"", 1) == 0)
		return (hay);
	ne_len = ft_strlen(ne);
	if (ft_memcmp(hay, (char *)"", 1))
	{
		while (len-- > 0 && *hay)
		{
			if (*hay == *ne && len >= ne_len - 1)
				if (ft_strncmp(hay, ne, ne_len) == 0)
					return (hay);
			hay++;
		}
	}
	return (NULL);
}
