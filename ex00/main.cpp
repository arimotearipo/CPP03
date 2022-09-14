#include "ClapTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	ClapTrap	yellowbox("Yellowbox");
	string		enemy("redbox");

	yellowbox.attack(enemy);
	cout << "yellowbox hp: " << yellowbox.getHP() << endl;
	cout << "yellowbox ep: " << yellowbox.getEP() << endl;
	yellowbox.takeDamage(2);
	cout << "yellowbox hp: " << yellowbox.getHP() << endl;
	cout << "yellowbox ep: " << yellowbox.getEP() << endl;
	yellowbox.beRepaired(5);
	cout << "yellowbox hp: " << yellowbox.getHP() << endl;
	cout << "yellowbox ep: " << yellowbox.getEP() << endl;
	// yellowbox.attack(enemy);
	// yellowbox.attack(enemy);
	// yellowbox.attack(enemy);
	// yellowbox.attack(enemy);
	// yellowbox.attack(enemy);
	// yellowbox.attack(enemy);
	// yellowbox.attack(enemy);
	// yellowbox.attack(enemy);
	// yellowbox.attack(enemy);
	// yellowbox.attack(enemy);
	// yellowbox.attack(enemy);
	// yellowbox.takeDamage(5);
	// yellowbox.beRepaired(3);
	// yellowbox.takeDamage(10);
	return (0);
}