#include "FragTrap.hpp"

using std::string;
using std::cout;
using std::endl;

FragTrap::FragTrap(void)
{
	this->_name = "Fragger Trapper";
	this->_hp = 100;
	this->_ep = 100;
	this->_att = 30;
	this->introMsg(); 
}

FragTrap::FragTrap(string name)
{
	this->_name = name;
	// ClapTrap::_hp = 100;
	this->_hp = 100;
	this->_ep = 100;
	this->_att = 30;
	this->introMsg();
}

FragTrap::~FragTrap(void)
{
	this->byeMsg();
}

FragTrap::FragTrap(FragTrap const &tocopy)
{
	*this = tocopy;
}

FragTrap	&FragTrap::operator=(FragTrap const &toassign)
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
void	FragTrap::introMsg(void)
{
	cout << RED << "Checking in is " << this->_name << ". A FragTrap." << COLOR_RESET << endl;
}

void	FragTrap::byeMsg(void)
{
	cout << "Checking out is " << this->_name << ". A FragTrap." << endl;
}
//messages end

void	FragTrap::highFiveGuys(void)
{
	cout << "Can " << this->_name << " get a high five, guys? No?" << endl;
}