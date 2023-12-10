# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 02:38:22 by mben-zeh          #+#    #+#              #
#    Updated: 2023/12/10 01:52:38 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

SRCS = main.cpp Weapon.cpp 
#HumanA.cpp HumanB.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME}:${OBJS}
	${CPP} ${OBJS} ${CPPFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all