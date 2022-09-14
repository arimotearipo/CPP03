CC = 		c++ -std=c++98

FLAGS = 	-Wall -Wextra -Werror

MAIN =		main.cpp

SRCS = 		ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

HEAD =		$(SRCS:.cpp=.hpp)

OBJS = 		$(SRCS:.cpp=.o) main.o

NAME = 		FragTrap

all:		$(NAME)

$(NAME):	$(OBJS) $(HEAD)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean	all