/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:52:35 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/29 13:04:24 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s;

	len = ft_strlen(s1) + 1;
	s = malloc(len * sizeof(char));
	if (!s)
		return (NULL);
	s[len] = '\0';
	ft_memcpy(s, s1, len);
	return (s);
}
