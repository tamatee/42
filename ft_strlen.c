/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 11:05:49 by teecharo          #+#    #+#             */
/*   Updated: 2023/02/27 11:12:56 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	count;

	count = 0;
	while (c[count])
		count++;
	return (count);
}
/*
#include<stdio.h>

int main(){
	printf("%zu",ft_strlen("asdf"));
}
*/
