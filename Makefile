# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 15:02:34 by fsenishi          #+#    #+#              #
#    Updated: 2022/10/03 16:20:18 by fsenishi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_isalpha.c \
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
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_strdup.c \
	  ft_calloc.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_itoa.c \
	  ft_striteri.c \
	  ft_strmapi.c \
	  ft_strtrim.c \
	  ft_split.c

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

BONUS_OBJECTS = $(BONUS:.c=.o)

OBJECTS = $(SOURCES:.c=.o)

NAME = libft.a	

FLAGS = -Wall -Wextra -Werror -I.

CC = gcc

all: $(NAME) 

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
%.o: %.c libft.h
	$(CC) -c $(FLAGS) $< 

clean:
	rm -rf $(OBJECTS) $(BONUS_OBJECTS)

fclean: clean
	rm -rf $(NAME)

re:        fclean all

bonus: all $(BONUS) $(BONUS_OBJECTS)
	ar -rcs $(NAME) $(BONUS_OBJECTS)

.PHONY: all clean fclean re bonus
