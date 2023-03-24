/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: teecharo <teecharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 09:00:34 by teecharo          #+#    #+#             */
/*   Updated: 2023/03/24 12:25:42 by teecharo         ###   ########.fr       */
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

int	ft_atoi(const char *str);

int	ft_isdigit(int c);

int	ft_isascii(int c);

int	ft_isalnum(int c);

int	ft_isprint(int c);

size_t	ft_strlen(const char *c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	ft_toupper(int c);

int	ft_tolower(int c);

void	*ft_memmove(void *dst, const void *src, size_t len);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *s1);

char	*ft_substr(char const *s, unsigned int start,size_t len);

#endif
