#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

using std::string;

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(string const &name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &tocopy);
		ScavTrap &operator=(ScavTrap const &toassign);

		//messages
		void	introMsg(void);
		void	attMsg(string const &target);
		void	byeMsg(void);
		//messages end

		void	attack(string const &target);
		void	guardGate(void);
};

#endif