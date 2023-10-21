# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 15:08:29 by mberrouk          #+#    #+#              #
#    Updated: 2023/10/21 14:12:12 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = megaphone

CC       = c++

FLAGS    = -Wall -Wextra -Werror -std=c++98

SRC      = megaphone.cpp

all      : $(NAME)

$(NAME)  : $(SRC)
		$(CC) $(FLAGS)  $(SRC) -o $(NAME)

clean    :
		rm -f $(NAME)

fclean   : clean

re       : fclean         all
