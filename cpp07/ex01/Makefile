FLAGS		= -Wall -Werror -Wextra -std=c++98

FILES		= main.cpp

OBJS		= $(FILES:.cpp=.o)

EXE			= iter

all:		$(EXE)

$(EXE):		$(OBJS)
			clang++ $(FLAGS) -o $(EXE) $(OBJS)

clean:
			rm $(OBJS)

fclean:		clean
			rm $(EXE)

re:			fclean all

.PHONY:		all clean fclean