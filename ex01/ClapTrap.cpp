#include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

ClapTrap::ClapTrap(string name)
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
	cout << "what? " << this->_hp << endl;
	if (this->_hp <= 0 || this->_ep <= 0)
	{
		cout << _name << " has died" << endl;
		return ;
	}
	cout << this->getName() << " attacks " << target << endl;
	this->_ep -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	cout << this->getName() << " has taken " << amount << " damage" << endl;
	this->_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp <= 0 || this->_ep <= 0)
	{
		cout << _name << " has died" << endl;
		return ;
	}
	cout << this->getName() << " repaired itself" << endl;
	this->_hp += amount;
	this->_ep -= 1;
}