# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 15:55:27 by lmeubrin          #+#    #+#              #
#    Updated: 2024/05/06 19:39:46 by lmeubrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/sh
CC = cc
CFLAGS = -Werror -Wall -Wextra -I
NAME = libft.a
LIB = ar
LIBFLAGS = -rcs
DEPS = libft.h

BUILD_DIR = .
SRC_DIR = .

SRCS = ft_isascii.c  ft_memmove.c  ft_strlcpy.c  ft_tolower.c \
ft_bzero.c    ft_isdigit.c  ft_memset.c   ft_strlen.c   ft_toupper.c \
ft_isalnum.c  ft_isprint.c  ft_strchr.c \
ft_isalpha.c  ft_memcpy.c   ft_strlcat.c  ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(LIB) $(LIBFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(DEPS) -c $^ -o $@ 
	
$(OBJS): $(SRSC)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
