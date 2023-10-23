# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 16:19:16 by mberrouk          #+#    #+#              #
#    Updated: 2023/10/23 14:35:25 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = phoneBook
FLAGS    = -Wall      -Wextra        -Werror      -std=c++98
SRCS     = main.cpp   PhoneBook.cpp  Contact.cpp
C        = c++

all      : $(NAME)

$(NAME)  : $(SRCS)
		$(C) $(FLAGS) $(SRCS) -o $(NAME)

clean    :
		rm -f  $(NAME)

fclean   : clean

re       : fclean all
