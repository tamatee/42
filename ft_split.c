/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:44:29 by teecharo          #+#    #+#             */
/*   Updated: 2023/04/12 16:17:10 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_wordcnt(const char *s, char c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			cnt++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (cnt);
}

static char	**ft_free_in(char **res, size_t index)
{
	while (index-- >= 0 && res[index])
	{
		free(res[index]);
		res[index] = NULL;
	}
	free(res);
	res = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*src;
	size_t	ti;

	if (!s)
		return (NULL);
	res = ft_calloc(1, (ft_wordcnt(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	ti = 0;
	while (*s)
	{
		if (*s != c)
		{
			src = (char *)s;
			while (*s && *s != c)
				s++;
			res[ti] = ft_substr(src, 0, (s - src));
			ti++;
		}
		else
			s++;
	}
	return (res);
}
