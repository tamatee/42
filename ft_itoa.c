/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:16:21 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/29 13:04:15 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static	size_t	cnt_digit(long long n)
{
	size_t	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digit++;
		n = -n;
	}
	while (n > 0)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char		*res;
	size_t		digit;
	long long	nbr;

	nbr = n;
	digit = cnt_digit(nbr);
	res = ft_calloc(1, digit + 1);
	if (!res)
		return (NULL);
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	digit--;
	if (nbr == 0)
		res[0] = '0';
	while (nbr > 0)
	{
		res[digit--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (res);
}
