# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgobert <tgobert@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 14:57:28 by tgobert           #+#    #+#              #
#    Updated: 2025/10/30 10:11:52 by tgobert          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_isalnum.c ft_isprint.c ft_isalpha.c ft_bzero.c ft_isascii.c \
				ft_strlen.c ft_isdigit.c ft_memset.c ft_bzero.c ft_strncmp.c\
				ft_memcpy.c ft_strlcat.c ft_memmove.c ft_strlcpy.c ft_toupper.c\
				ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c\
				ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
				ft_strjoin.c ft_strtrim.c 

OBJS		= $(SRCS:.c=.o)

SRCS_BONUS	= ft_lstnew_bonus.c

OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

CFLAGS		= -Wall -Wextra -Werror

NAME		= libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

re:			fclean all
