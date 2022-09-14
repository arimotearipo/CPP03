#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include "colours.h"

using std::string;

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(string	const &name);

		~ClapTrap(void);

		ClapTrap(ClapTrap const &tocopy);
		ClapTrap &operator=(ClapTrap const &toassign);

		//messages
		void	introMsg(void);
		void	attMsg(string const &target);
		void	byeMsg(void);
		//messages end
		
		//getters
		string	const &getName(void) const;
		int		getHP(void) const;
		int		getEP(void) const;
		int		getAtt(void) const;
		//getters end

		//setters
		// void	setName(string name);
		// void	setHP(int n);
		// void	setEP(int n);
		// void	setAtt(int n);
		//setters end

		void	attack(string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		bool	tiredOrDied(void);

	protected:
		string				_name;
		unsigned int		_hp;
		unsigned int		_ep;
		unsigned int		_att;
};

#endif