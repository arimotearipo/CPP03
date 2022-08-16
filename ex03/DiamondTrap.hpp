#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	DiamondTrap(void);
	DiamondTrap(string name);
	~DiamondTrap(void);
	DiamondTrap(DiamondTrap const &tocopy);
	DiamondTrap	&operator=(DiamondTrap const &toassign);

	private:
		string	_dtname;
};

#endif