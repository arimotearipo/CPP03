#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::string;

class	ClapTrap
{
	public:
		ClapTrap(string	name);

		~ClapTrap(void);

		ClapTrap(ClapTrap &tocopy);
		ClapTrap &operator=(ClapTrap &toassign);

		//getters
		string	getName(void);
		int		getHP(void);
		int		getEP(void);
		int		getAtt(void);

		void	attack(string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		bool	tiredOrDied(void);
	private:
		string	_name;
		int		_hp;
		int		_ep;
		int		_att;

};

#endif