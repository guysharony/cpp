# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/23 10:37:15 by gsharony          #+#    #+#              #
#    Updated: 2020/10/23 11:39:31 by gsharony         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= clang++

FLAGS		= -Wall -Werror -Wextra -std=c++98

FILES		= main.cpp Replace.cpp

OBJS		= ${FILES:.cpp=.o}

EXE			= replace

all:		${EXE}

${EXE}:		${OBJS}
			${CC} ${FLAGS} -o ${EXE} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${EXE}

re:			fclean all

.PHONY:		all clean fclean