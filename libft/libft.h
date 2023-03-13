/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <teecharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:00:34 by teecharo          #+#    #+#             */
/*   Updated: 2023/02/27 13:25:57 by teecharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_split_next
{
	size_t start;
	size_t length;
}				t_split_next;

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isascii(int c);

int	ft_isalnum(int c);

int	ft_isprint(int c);

size_t	ft_strlen(const char *c);

int	ft_toupper(int c);

int	ft_tolower(int c);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

#endif
