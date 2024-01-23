# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/25 20:24:08 by mben-zeh          #+#    #+#              #
#    Updated: 2024/01/18 23:44:20 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
#-fsanitize=address -g3

SRCS = ClapTrap.cpp main.cpp  ScavTrap.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CPP} ${OBJS} ${CPPFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all