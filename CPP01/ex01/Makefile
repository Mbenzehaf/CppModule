# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 20:39:29 by mben-zeh          #+#    #+#              #
#    Updated: 2023/12/11 02:10:37 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address -g3

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME}:${OBJS}
	${CPP} ${OBJS} ${CPPFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all