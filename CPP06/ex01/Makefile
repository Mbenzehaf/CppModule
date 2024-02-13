# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/08 11:30:11 by mben-zeh          #+#    #+#              #
#    Updated: 2024/02/13 13:44:31 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serializer

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

#-fsanitize=address -g3

SRCS = main.cpp serializer.cpp  

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CXX} ${OBJS} ${CXXFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all