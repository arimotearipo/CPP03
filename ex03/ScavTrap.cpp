#include "ScavTrap.hpp"

using std::string;
using std::cout;
using std::endl;

ScavTrap::ScavTrap(void)
{
	this->_name = "unknown ScavTrap";
	this->_hp = 100;
	this->_ep = 50;
	this->_att = 20;
	this->introMsg();
}

ScavTrap::ScavTrap(string name)
{
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_att = 20;
	this->introMsg();
}

ScavTrap::~ScavTrap(void)
{
	this->byeMsg();
}

ScavTrap::ScavTrap(ScavTrap const &tocopy)
{
	*this = tocopy;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &toassign)
{
	if (this != &toassign)
	{
		this->_name = toassign._name;
		this->_hp = toassign._hp;
		this->_ep = toassign._ep;
		this->_att = toassign._att;
	}
	return (*this);
}

//messages
void	ScavTrap::introMsg(void)
{
	cout << RED << "Me am " << this->_name << ". A strong ScavTrap" << COLOR_RESET << endl;
}

void	ScavTrap::attMsg(string &target)
{
	cout << "Pew! Pew! " << this->_name << " attacked " << target << " and dealt " << this->_att << " damage!" << endl;
}

void	ScavTrap::byeMsg(void)
{
	cout << "This is goodbye from " << this->_name << endl;
}
//messages end

void	ScavTrap::attack(string &target)
{
	if (this->tiredOrDied())
		return ;
	this->attMsg(target);
	this->_ep -= 1;
}

void	ScavTrap::guardGate(void)
{
	cout << this->_name << " is in Gate keeper mode" << endl;
}