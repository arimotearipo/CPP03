#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap(void)
{
	this->_name = "unnamed DiamondTrap";
	this->introMsg();
}

DiamondTrap::DiamondTrap(string name)
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_att = FragTrap::_att;
}

DiamondTrap::~DiamondTrap(void)
{
	this->byeMsg();
}

DiamondTrap::DiamondTrap(DiamondTrap const &tocopy)
{
	*this = tocopy;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &toassign)
{
	this->_name = toassign._name;
	this->_hp = toassign._hp;
	this->_ep = toassign._ep;
	this->_att = toassign._att;
	return (*this);
}

void	DiamondTrap::introMsg(void)
{
	cout << RED << "I am a DiamondTrap named " << this->_name << endl;
}

void	DiamondTrap::byeMsg(void)
{
	cout << this->_name << " just got destroyed" << endl;
}

void	DiamondTrap::whoAmI(void)
{
	cout << GRN << "My name is " << YEL << this->_name << GRN << " and my given ClapTrap name is " << YEL << ClapTrap::_name << COLOR_RESET << endl;
}