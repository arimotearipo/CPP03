#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

using std::string;

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(string name);
	 	~ScavTrap(void);
		ScavTrap(ScavTrap const &tocopy);
		ScavTrap &operator=(ScavTrap const &toassign);

		//messages
		void	introMsg(void);
		void	attMsg(string &target);
		void	byeMsg(void);
		//messages end

		void	attack(string &target);
		void	guardGate(void);
};

#endif