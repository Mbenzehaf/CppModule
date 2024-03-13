# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/08 11:47:36 by mben-zeh          #+#    #+#              #
#    Updated: 2024/03/09 14:51:01 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

#-fsanitize=address -g3

SRCS = main.cpp 

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CXX} ${OBJS} ${CXXFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all