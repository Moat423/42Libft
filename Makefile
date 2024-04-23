# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 15:55:27 by lmeubrin          #+#    #+#              #
#    Updated: 2024/04/22 16:40:33 by lmeubrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wall -Wextra
NAME = libft.a

SRCS = ft_isalpha.c  ft_isprint.c  ft_memset.c ft_bzero.c    ft_isascii.c  ft_memcpy.c   ft_strlcpy.c ft_isalnum.c  ft_isdigit.c  ft_memmove.c  ft_strlen.c

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ 

clean:
	rm -f *.o

.PHONY: all, clean, fclean, re
