# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 09:58:48 by mben-zeh          #+#    #+#              #
#    Updated: 2023/12/01 19:30:42 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CPP} ${OBJS} ${CPPFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all
