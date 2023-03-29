/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:22:12 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/29 13:23:57 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*node;

	size = 0;
	node = lst;
	while (node != NULL)
	{
		node = node -> next;
		size++;
	}
	return (size);
}
