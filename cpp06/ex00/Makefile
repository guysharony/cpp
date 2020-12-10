FLAGS		= -Wall -Werror -Wextra -std=c++98

FILES		= main.cpp Convert.cpp

OBJS		= ${FILES:.cpp=.o}

EXE			= convert

all:		${EXE}

${EXE}:		${OBJS}
			clang++ ${FLAGS} -o ${EXE} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${EXE}

re:			fclean all

.PHONY:		all clean fclean