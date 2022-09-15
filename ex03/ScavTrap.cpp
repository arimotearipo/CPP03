#include "ScavTrap.hpp"

using std::string;
using std::cout;
using std::endl;

#define RED "\e[0;31m"
#define RESET "\e[0m"

ScavTrap::ScavTrap(void)
{
	cout << GRN << "[SCAVTRAP CONSTRUCTOR]" << RESET << " ";
	this->_name = "unknown ScavTrap";
	this->_hp = 100;
	this->_ep = 50;
	this->_att = 20;
	this->introMsg();
}

ScavTrap::ScavTrap(string const &name)
{
	cout << GRN << "[SCAVTRAP CONSTRUCTOR]" << RESET << " ";
	this->_name = name;
	this->_hp = 100;
	this->_ep = 50;
	this->_att = 20;
	this->introMsg();
}

ScavTrap::~ScavTrap(void)
{
	cout << GRN << "[SCAVTRAP DECONSTRUCTOR]" << RESET << " ";
	this->byeMsg();
}

ScavTrap::ScavTrap(ScavTrap const &tocopy) : ClapTrap()
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
	cout << GRN << "[introMsg()]" << RESET << " ";
	cout << GRN << "Me am " << this->_name << ". A strong ScavTrap" << RESET << endl;
}

void	ScavTrap::attMsg(string const &target)
{
	cout << GRN << "[attMsg()]" << RESET << " ";
	cout << GRN << "Pew! Pew! " << this->_name << " attacked " << target << " and dealt " << this->_att << " damage!" << RESET << endl;
}

void	ScavTrap::byeMsg(void)
{
	cout << GRN << "[byeMsg()]" << RESET << " ";
	cout << GRN <<"This is goodbye from " << this->_name << RESET << endl;
}
//messages end

void	ScavTrap::attack(string const &target)
{
	if (this->tiredOrDied())
	{
		cout << GRN << this->_name << " is too tired to attack" << RESET << endl;
		return ;
	}
	this->attMsg(target);
	this->_ep -= 1;
}

void	ScavTrap::guardGate(void)
{
	cout << GRN << "[guardGate()]" << RESET << " ";
	cout << GRN << this->_name << " is in Gate keeper mode" << RESET << endl;
}