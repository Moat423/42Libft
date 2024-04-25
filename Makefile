# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 15:55:27 by lmeubrin          #+#    #+#              #
#    Updated: 2024/04/25 12:28:54 by lmeubrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wall -Wextra
NAME = libft.a
LIB = ar
LIBFLAGS = rcf
DEPS = libft.h

BUILD_DIR = .
SRC_DIR = .

SRCS = $(shell find $(SRC_DIR) -name '*.c')

OBJS = $(SRCS: %.c= (BUILD_DIR)/%.o)

$(NAME): $(OBJS)
	$(LIB) $(LIBFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(DEPS) -c $< -o $@ 
	
$(OBJS): $(SRSC)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
