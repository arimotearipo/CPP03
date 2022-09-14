#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(string name);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const &tocopy);
		DiamondTrap	&operator=(DiamondTrap const &toassign);

		// messages
		void	introMsg(void);
		void	byeMsg(void);
		// messages end

		// getters
		string	getName(void);
		string	getClapName(void);
		// getters end

		using ScavTrap::attack;

		// special capacity
		void	whoAmI(void);
	private:
		string	_name;
};

#endif