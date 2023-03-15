/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:19:49 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/15 12:50:25 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*ne;
	size_t	hay_len;

	hay = (char *)haystack;
	ne = (char *)needle;
	if (hay == NULL && len == 0)
		return (NULL);
	if (ft_memcmp(ne, (char *)"", 1) == 0)
		return (hay);
	hay_len = ft_strlen(hay);
	if (ft_memcmp(hay, (char *)"", 1))
	{
		while (len-- && *hay)
		{
			if (*hay == *ne && len >= hay_len - 1)
				if (ft_strncmp(hay, ne, hay_len) == 0)
					return (hay);
			hay++;
		}
	}
	return (NULL);
}
