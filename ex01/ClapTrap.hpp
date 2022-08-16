#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::string;

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(string	name);

		~ClapTrap(void);

		ClapTrap(ClapTrap &tocopy);
		ClapTrap &operator=(ClapTrap &toassign);

		void	introMsg(void);
		
		//getters
		string	getName(void);
		int		getHP(void);
		int		getEP(void);
		int		getAtt(void);
		//getters end

		//setters
		// void	setName(string name);
		// void	setHP(int n);
		// void	setEP(int n);
		// void	setAtt(int n);
		//setters end

		void	attack(string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		bool	tiredOrDied(void);

	protected:
		string	_name;
		int		_hp;
		int		_ep;
		int		_att;
};

#endif