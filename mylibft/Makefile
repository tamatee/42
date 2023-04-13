# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: teecharo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/29 14:23:38 by teecharo          #+#    #+#              #
#    Updated: 2023/04/12 15:51:19 by teecharo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

HEAD		= .

TESTFILE	= main.c

DIRSRC		= ./

LOGFILE		= ${NAME}

SRC			= ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c\
			ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
			ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c\
			ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
			ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c\
			ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

BONUS		= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRCS			= ${addprefix ${DIRSRC}, ${SRC}}
BONUSES			= ${addprefix ${DIRSRC}, ${BONUS}}

SRCOBJ			= ${SRCS:.c=.o}

BONUSOBJ		= ${BONUSES:.c=.o}

CC				= cc
CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

all:			${NAME}

bonus:			all
				${CC} ${CFLAGS} -c ${BONUSES}
				ar -rcs ${NAME} ${BONUSOBJ}

${NAME}:		$(SRCOBJ)
				ar -rcs ${NAME} ${SRCOBJ}

clean:
				${RM} ${SRCOBJ} ${BONUSOBJ}

fclean:			clean
				${RM} ${NAME} ${LOGFILE}

re:				fclean all
