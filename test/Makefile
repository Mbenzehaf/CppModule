# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 15:07:22 by mben-zeh          #+#    #+#              #
#    Updated: 2023/11/29 15:07:39 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = test.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CPP} ${OBJS} ${CPPFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclan : clean
	rm -rf ${NAME}

re : fclean all