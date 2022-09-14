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

	cout << UWHT << "Deleting ScavTrap..." << RESET << endl;
	delete scav;
	cout << endl;
	return (0);
}