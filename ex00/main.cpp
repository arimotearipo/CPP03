#include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	ClapTrap	yellowbox("Yellowbox");
	string		enemy("redbox");

	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.attack(enemy);
	yellowbox.takeDamage(5);
	yellowbox.beRepaired(3);
	yellowbox.takeDamage(10);
	return (0);
}