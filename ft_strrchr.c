/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:07:32 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/22 15:50:48 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;
	char			chr;
	char			*ptr;

	ptr = (char *)s;
	chr = (char)c;
	len = ft_strlen(s);
	if (c == 0)
	{
		return ((char *)ptr + len);
	}
	while (len--)
	{
		if (ptr[len] == chr)
			return ((char *)ptr + len);
	}
	return (NULL);
}
