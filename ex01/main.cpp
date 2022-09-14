#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	cout << UWHT << "Instantiating a ClapTrap..." << RESET << endl;
	ClapTrap	clap("Alpha");
	cout << endl;

	cout << UWHT << "Instantiating a ScavTrap..." << RESET << endl;
	ScavTrap	*scav = new ScavTrap("Bravo");
	cout << endl;

	cout << UWHT << "Calling guardGate() for ScavTrap..." << RESET << endl;
	scav->guardGate();
	cout << endl;

	cout << UWHT << "Showing ClapTrap's attributes..." << RESET << endl;
	cout << "Name: " << clap.getName() << endl;
	cout << "Attack point: " << clap.getAtt() << endl;
	cout << "Health point: " << clap.getHP() << endl;
	cout << "Energy point: " << clap.getEP() << endl;
	cout << endl;

	cout << UWHT << "Showing ScavTrap's attributes..." << RESET << endl;
	cout << "Name: " << scav->getName() << endl;
	cout << "Attack point: " << scav->getAtt() << endl;
	cout << "Health point: " << scav->getHP() << endl;
	cout << "Energy point: " << scav->getEP() << endl;
	cout << endl;

	cout << UWHT << "Deleting ScavTrap..." << RESET << endl;
	delete scav;
	cout << endl;
	return (0);
}