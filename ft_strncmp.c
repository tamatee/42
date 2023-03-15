/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:15:10 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/13 15:26:41 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*ptr;
	char	*dst;

	ptr = (char *)s1;
	dst = (char *)s2;
	while (n-- > 0)
	{
		if (*ptr++ != *dst++)
			return (*ptr - *dst);
	}
	return (0);
}
