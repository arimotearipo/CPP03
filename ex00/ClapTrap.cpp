#include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

ClapTrap::ClapTrap(string name) : _hp(10), _ep(10), _att(10)
{
	_name = name;
	cout << name << " created!" << endl;
}

ClapTrap::~ClapTrap(void)
{
	cout << _name << " destroyed" << endl;
}

ClapTrap::ClapTrap(ClapTrap &tocopy)
{
	*this = tocopy;
}

ClapTrap	&ClapTrap::operator=(ClapTrap &toassign)
{
	this->_name = toassign.getName();
	this->_hp = toassign.getHP();
	this->_ep = toassign.getEP();
	this->_att = toassign.getAtt();
	return (*this);
}

//getters
string		ClapTrap::getName(void)
{
	return (this->_name);
}

int			ClapTrap::getHP(void)
{
	return (this->_hp);
}

int			ClapTrap::getEP(void)
{
	return (this->_ep);
}

int			ClapTrap::getAtt(void)
{
	return (this->_att);
}

void	ClapTrap::attack(string &target)
{
	if (this->tiredOrDied())
		return ;
	cout << this->getName() << " attacks " << target << " and inflicts " << this->_att << " damage" << endl;
	this->_ep -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	cout << this->getName() << " has taken " << amount << " damage" << endl;
	if (amount >= this->_hp)
	{
		cout << this->_name << " received the killing blow" << endl;
	}
	this->_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->tiredOrDied())
		return ;
	cout << this->getName() << " repaired itself" << endl;
	this->_hp += amount;
	this->_ep -= 1;
}

bool	ClapTrap::tiredOrDied(void)
{
	if (this->_hp <= 0)
	{
		cout << _name << " has died" << endl;
		return (true);
	}
	else if (this->_ep <= 0)
	{
		cout << _name << " is exhausted" << endl;
		return (true);
	}
	else
		return (false);
}