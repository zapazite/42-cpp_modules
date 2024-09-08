# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-prin <mde-prin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/04 11:40:14 by mde-prin          #+#    #+#              #
#    Updated: 2024/07/29 18:00:32 by mde-prin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CXX = c++

CXXFLAGS = -Werror -Wextra -Wall -std=c++98

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

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
