# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 16:59:42 by mben-zeh          #+#    #+#              #
#    Updated: 2023/12/05 18:02:37 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
#-fsanitize=address -g3

SRCS = Account.cpp tests.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CPP} ${OBJS} ${CPPFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all