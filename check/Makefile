# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 12:59:00 by lmeubrin          #+#    #+#              #
#    Updated: 2024/05/06 20:06:18 by lmeubrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
SRC_DIR = .
OBJ_DIR = obj
CFLAGS = -Werror -Wall -Wextra -I../
NAME = test.a
DEPS = 
SRCS = main.c ft_strnstr_check.c ft_isprint_check.c ft_memchr_check.c \
	   ft_atoi_check.c
OBJS = $(SRCS:%=$(OBJ_DIR)/%.o)
LDFLAGS = -L../ -lft
LIBPATH = ../libft.a

$(NAME): $(OBJS) $(LIBPATH)
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

$(OBJ_DIR)/%.c.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) -c $< $(CFLAGS) -o $@

$(OBJ_DIR):
	mkdir $@

lib:
	cd ../ && $(MAKE)
	$(MAKE)

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR) 

fclean: clean
	rm -f $(NAME)

re: fclean all

g: $(OBJS) $(LIBPATH)
	$(CC) -o debug.out $^ $(CFLAGS) $(LDFLAGS) -g

.PHONY: all, clean, fclean, re, g, lib
