# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/09 15:15:46 by gsharony          #+#    #+#              #
#    Updated: 2020/12/09 15:15:52 by gsharony         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= clang++

FLAGS		= -Wall -Werror -Wextra

FILES		= main.cpp Convert.cpp

OBJS		= ${FILES:.cpp=.o}

EXE			= test

all:		${EXE}

${EXE}:		${OBJS}
			${CC} ${FLAGS} -o ${EXE} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${EXE}

re:			fclean all

.PHONY:		all clean fclean