CC = 		c++ -std=c++98

FLAGS = 	-Wall -Wextra -Werror

SRCS = 		main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS = 		$(SRCS:.cpp=.o)

NAME = 		ClapTrap

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean	all