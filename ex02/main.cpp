#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	cout << UWHT << "Instantiating ClapTrap..." << RESET << endl;
	ClapTrap	clap("Alpha");
	cout << endl;

	cout << UWHT << "Instantiating ScavTrap..." << RESET << endl;
	ScavTrap	scav("Bravo");
	cout << endl;

	cout << UWHT << "Instantiating FragTrap..." << RESET << endl;
	FragTrap	frag("Charlie");
	cout << endl;

	cout << UWHT << "Calling highFiveGuys() for FragTrap..." << RESET << endl;
	frag.highFiveGuys();
	cout << endl;
	return (0);
}