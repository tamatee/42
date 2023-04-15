/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <atiampae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:45:07 by atiampae          #+#    #+#             */
/*   Updated: 2022/11/16 16:43:21 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_calloc(size_t count, size_t size)
{
	void	*new;

	new = malloc(count * size);
	if (count == SIZE_MAX || count == SIZE_MAX)
		return (NULL);
	if (!new)
		return (0);
	ft_bzero(new, count * size);
	return (new);
}
