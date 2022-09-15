#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap(void)
{
	DiamondTrap::_name = "unnamed DiamondTrap";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hp = FragTrap::getHP();
	this->_ep = ScavTrap::getEP();
	this->_att = FragTrap::getAtt();
	cout << MAG << "[DIAMONDTRAP CONSTRUCTOR]" << RESET << " ";
	this->introMsg();
}

DiamondTrap::DiamondTrap(string const &name) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hp = FragTrap::getHP();
	this->_ep = ScavTrap::getEP();
	this->_att = FragTrap::getAtt();
	cout << MAG << "[DIAMONDTRAP CONSTRUCTOR]" << RESET << " ";
	this->introMsg();
}

DiamondTrap::~DiamondTrap(void)
{
	cout << MAG << "[DIAMONDTRAP DECONSTRUCTOR]" << RESET << " ";
	this->byeMsg();
}

DiamondTrap::DiamondTrap(DiamondTrap const &tocopy) : ClapTrap(), ScavTrap(), FragTrap()
{
	*this = tocopy;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &toassign)
{
	ClapTrap::_name = toassign.getClapName();
	this->_name = toassign._name;
	this->_hp = toassign._hp;
	this->_ep = toassign._ep;
	this->_att = toassign._att;
	return (*this);
}

void	DiamondTrap::introMsg(void)
{
	cout << MAG << "[introMsg()]" << RESET << " ";
	cout << MAG << "I am a DiamondTrap named " << this->_name << RESET << endl;
}

void	DiamondTrap::byeMsg(void)
{
	cout << MAG << "[byeMsg()]" << RESET << " ";
	cout << MAG << this->_name << " just got destroyed" << RESET << endl;
}

string	const &DiamondTrap::getClapName(void) const
{
	return (ClapTrap::getName());
}

void	DiamondTrap::whoAmI(void)
{
	cout << MAG << "[whoAmI()]" << RESET << " ";
	cout << MAG << "My name is " << BWHT << this->_name << MAG << " and my given ClapTrap name is " << BWHT << ClapTrap::_name << RESET << endl;
}