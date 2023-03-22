/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:27:37 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/22 16:00:45 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	a = malloc(count * size);
	if (count >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	if (!a)
		return (NULL);
	ft_bzero(a, count * size);
	return (a);
}
