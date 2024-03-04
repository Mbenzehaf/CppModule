# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/18 09:54:01 by mben-zeh          #+#    #+#              #
#    Updated: 2024/03/04 11:12:58 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Stack

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