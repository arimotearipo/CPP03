#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include "colours.h"

using std::string;

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(string	name);

		~ClapTrap(void);

		ClapTrap(ClapTrap &tocopy);
		ClapTrap &operator=(ClapTrap &toassign);

		//messages
		void	introMsg(void);
		void	attMsg(string &target);
		void	byeMsg(void);
		//messages end
		
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

	private:
		string				_name;
		unsigned int		_hp;
		unsigned int		_ep;
		unsigned int		_att;
};

#endif