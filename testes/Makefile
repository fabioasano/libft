# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsenishi <fsenishi@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 15:02:34 by fsenishi          #+#    #+#              #
#    Updated: 2022/09/11 00:57:20 by fsenishi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "libft.h"

BIN = ./bin

all: myapps 

myapps: clean \
	  $(BIN)/tft_isalpha 

	


$(BIN)/%: %.c 
	gcc $< -lft -L ../  -I ../ -o $@ 
clean:
	rm -rf ./bin/* 
