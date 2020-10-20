# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/13 10:47:47 by gsharony          #+#    #+#              #
#    Updated: 2020/10/15 10:29:14 by gsharony         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= clang++

FLAGS		= -Wall -Werror -Wextra -std=c++98

FILES		= megaphone.cpp

OBJS		= ${FILES:.cpp=.o}

EXE			= megaphone

all:		${EXE}

${EXE}:		${OBJS}
			${CC} ${FLAGS} -o ${EXE} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${EXE}

re:			fclean all

.PHONY:		all clean fclean