# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 01:38:41 by mben-zeh          #+#    #+#              #
#    Updated: 2023/12/09 02:30:16 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME}:${OBJS}
	${CPP} ${OBJS} ${CPPFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all