# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 15:02:34 by fsenishi          #+#    #+#              #
#    Updated: 2022/09/17 01:22:39 by fsenishi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = \
	  ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c

OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a	
FLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME) 

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
%.o: %.c libft.h
	$(CC) -c $(FLAGS) $< 

clean:
	rm - rf $(OBJECTS)

fclean:
	rm -rf $(NAME)

re:        fclean all

.PHONY: all clean fclean re
