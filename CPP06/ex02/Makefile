# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 11:33:57 by mben-zeh          #+#    #+#              #
#    Updated: 2024/02/14 16:49:04 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = base

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

#-fsanitize=address -g3

SRCS = main.cpp base.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CXX} ${OBJS} ${CXXFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all