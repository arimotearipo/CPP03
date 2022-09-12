#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	cout << UWHT << "Instantiating a ClapTrap..." RESET << endl;
	ClapTrap	clap("Alpha");
	cout << endl;

	cout << UWHT << "Instantiating a ScavTrap..." RESET << endl;
	ScavTrap	scav("Bravo");
	cout << endl;

	cout << UWHT << "Instantiating a FragTrap..." RESET << endl;
	FragTrap	frag("Charlie");
	cout << endl;

	cout << UWHT << "Instantiating a DiamondTrap..." RESET << endl;
	DiamondTrap	diam("Delta");
	cout << endl;

	cout << UWHT << "DiamondTrap calling whoAmI() function..." << RESET << endl;
	diam.whoAmI();
	cout << endl;
	return (0);
}