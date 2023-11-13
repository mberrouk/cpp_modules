# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/21 16:19:16 by mberrouk          #+#    #+#              #
#    Updated: 2023/11/13 15:13:46 by mberrouk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = phoneBook
FLAGS    = -Wall      -Wextra        -Werror      -std=c++98
INCLUDE	 = Contact.hpp PhoneBook.hpp main.hpp
SRCS     = main.cpp   PhoneBook.cpp  Contact.cpp  utils.cpp
C        = c++

all      : $(NAME)

$(NAME)  : $(SRCS) $(INCLUDE)
		$(C) $(FLAGS) $(SRCS) -o $(NAME)

clean    :
		rm -f  $(NAME)

fclean   : clean

re       : fclean all
