# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/16 06:01:13 by mben-zeh          #+#    #+#              #
#    Updated: 2024/01/14 02:57:50 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

#-fsanitize=address -g3

SRCS = Fixed.cpp main.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CPP} ${OBJS} ${CPPFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all