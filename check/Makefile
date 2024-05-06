# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 12:59:00 by lmeubrin          #+#    #+#              #
#    Updated: 2024/04/25 13:28:37 by lmeubrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wall -Wextra -I../
NAME = test.a
DEPS = 
SRCS = ft_strnstr_check.c ft_isprint_check.c ft_memchr_check.c main.c
LDFLAGS = -L$(LIBPATH) -lft
LIBPATH = ../

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)
