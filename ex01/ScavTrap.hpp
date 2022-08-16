#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

using std::string;

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(string name);
		ScavTrap(ScavTrap const &tocopy);
		ScavTrap &operator=(ScavTrap const &toassign);

		void	introMsg(void);

		void	guardGate(void);
};

#endif