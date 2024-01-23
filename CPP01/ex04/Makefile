# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 05:33:51 by mben-zeh          #+#    #+#              #
#    Updated: 2024/01/05 06:05:34 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 

#-fsanitize=address -g3

SRCS = main.cpp sed.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME}:${OBJS}
	${CPP} ${OBJS} ${CPPFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all