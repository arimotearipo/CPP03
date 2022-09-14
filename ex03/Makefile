CC = 		c++

FLAGS = 	-Wall -Wextra -Werror

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 		main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

HEAD = 		ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

OBJS = 		$(SRCS:.cpp=.o)

NAME = 		DiamondTrap

all:		$(NAME)

$(NAME):	$(OBJS) $(HEAD)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:		
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean	all