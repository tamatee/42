/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:11:37 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/29 14:37:21 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*mapnext;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	map = ft_lstnew(f(lst -> content));
	if (!map)
		return (NULL);
	mapnext = map;
	node = lst -> next;
	while (node != NULL)
	{
		mapnext -> next = ft_lstnew(f(node -> content));
		if (!mapnext)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		node = node -> next;
		mapnext = mapnext -> next;
	}
	return (map);
}
