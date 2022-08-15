#include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

ClapTrap::ClapTrap(string name)
{
	_name = name;
}

ClapTrap::~ClapTrap(void)
{
	return ;
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

void	ClapTrap(string &target)
{
	cout << this->getName() << " attacks " << target << endl;
}