# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/04 11:40:14 by mde-prin          #+#    #+#              #
#    Updated: 2024/08/28 11:47:03 by mde-prin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HI

CXX = c++

CXXFLAGS = -Werror -Wextra -Wall -std=c++98

SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
