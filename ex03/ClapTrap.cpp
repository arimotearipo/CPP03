#include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

ClapTrap::ClapTrap(void) : _name("unknown"), _hp(10), _ep(10), _att(0)
{
	cout << BLU << "[CLAPTRAP CONSTRUCTOR]" RESET << " ";
	cout << BBLU "A ClapTrap-like machine is built" RESET << endl;
}

ClapTrap::ClapTrap(string const &name) : _name(name), _hp(10), _ep(10), _att(0)
{
	cout << BLU << "[CLAPTRAP CONSTRUCTOR]" << RESET << " ";
	this->introMsg();
}

ClapTrap::~ClapTrap(void)
{
	cout << BLU "[CLAPTRAP DECONSTRUCTOR]" << RESET << " ";
	this->byeMsg();
}

ClapTrap::ClapTrap(ClapTrap const &tocopy)
{
	*this = tocopy;
	this->introMsg();
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &toassign)
{
	this->_name = toassign._name;
	this->_hp = toassign._hp;
	this->_ep = toassign._ep;
	this->_att = toassign._att;
	this->introMsg();
	return (*this);
}

//messages
void	ClapTrap::introMsg(void)
{
	cout << BLU "[introMsg()]" << RESET << " ";
	cout << BLU "Hi, my name is " << this->_name << ". I'm a ClapTrap" RESET << endl;
}

void	ClapTrap::attMsg(string const &target)
{
	cout << BLU << "[attMsg()]" << RESET << " ";
	cout << BLU << this->_name << "attacks " << target << " and inflicted " << this->_att << " damage!" RESET << endl;
}

void	ClapTrap::byeMsg(void)
{
	cout << BLU << "[byeMsg()]" << RESET << " ";
	cout << BLU << this->_name << " signing off" << RESET << endl;
}
//messages end

//getters
string	const &ClapTrap::getName(void) const
{
	return (this->_name);
}

int		ClapTrap::getHP(void) const
{
	return (this->_hp);
}

int		ClapTrap::getEP(void) const
{
	return (this->_ep);
}

int		ClapTrap::getAtt(void) const
{
	return (this->_att);
}
//getters end

//setters
//setters end

void	ClapTrap::attack(string const &target)
{
	if (this->tiredOrDied())
	{
		cout << BLU << this->_name << " is too tired to attack" << RESET << endl;
		return ;
	}
	this->attMsg(target);
	this->_ep -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	cout << BLU << "[takeDamage()]" << RESET << " ";
	cout << BLU << this->_name << " has taken " << amount << " damage" << RESET << endl;
	if (amount >= this->_hp)
	{
		cout << BBLU << this->_name << " received the killing blow" << RESET << endl;
	}
	this->_hp -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->tiredOrDied())
	{
		cout << BLU << this->_name << " is too tired to be repaired" << RESET << endl;
		return ;
	}
	cout << BLU << "[beRepaired]" << RESET << " ";
	cout << BLU << this->_name << " repaired itself" << RESET << endl;
	this->_hp += amount;
	this->_ep -= 1;
}

bool	ClapTrap::tiredOrDied(void)
{
	if (this->_hp <= 0)
	{
		// cout << BRED << _name << " has died" << RESET << endl;
		return (true);
	}
	else if (this->_ep <= 0)
	{
		// cout << RED << _name << " is exhausted" << RESET << endl;
		return (true);
	}
	else
		return (false);
}