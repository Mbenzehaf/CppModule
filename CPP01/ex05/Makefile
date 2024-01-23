# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 22:44:44 by mben-zeh          #+#    #+#              #
#    Updated: 2024/01/06 02:45:21 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CPP = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 

#-fsanitize=address -g3

SRCS = main.cpp Harl.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME}:${OBJS}
	${CPP} ${OBJS} ${CPPFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all