# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-zeh <mben-zeh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 08:33:50 by mben-zeh          #+#    #+#              #
#    Updated: 2024/03/09 14:44:37 by mben-zeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

#-fsanitize=address -g3

SRCS = main.cpp Span.cpp

OBJS = ${SRCS:.cpp=.o}

all : ${NAME}

${NAME} : ${OBJS}
	${CXX} ${OBJS} ${CXXFLAGS} -o ${NAME}

clean : 
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all