CC = 		c++

FLAGS = 	-Wall -Wextra -Werror

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

MAIN =		main.cpp

SRCS = 		ClapTrap.cpp

OBJS = 		$(SRCS:.cpp=.o) $(MAIN:.cpp=.o)

HEAD =		$(SRCS:.cpp=.hpp)

NAME = 		ClapTrap

all:		$(NAME)

$(NAME):	$(SRCS) $(HEAD)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean	all