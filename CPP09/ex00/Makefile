# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 09:44:36 by mben-zeh          #+#    #+#              #
#    Updated: 2024/03/22 09:44:38 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

#-fsanitize=address -g3

SRCS = main.cpp BitcoinExchange.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CXX} ${OBJS} ${CXXFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all