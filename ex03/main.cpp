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
	DiamondTrap	*diam = new DiamondTrap("Delta");
	cout << endl;

	cout << UWHT << "ScavTrap calling the attack() method..." << RESET << endl;
	string randomname = "whoever";
	scav.attack(randomname);
	cout << endl;

	cout << UWHT << "Showing ClapTrap's attributes..." << RESET << endl;
	cout << "Name: " << clap.getName() << endl;
	cout << "Attack point: " << clap.getAtt() << endl;
	cout << "Health point: " << clap.getHP() << endl;
	cout << "Energy point: " << clap.getEP() << endl;
	cout << endl;

	cout << UWHT << "Showing ScavTrap's attributes..." << RESET << endl;
	cout << "Name: " << scav.getName() << endl;
	cout << "Attack point: " << scav.getAtt() << endl;
	cout << "Health point: " << scav.getHP() << endl;
	cout << "Energy point: " << scav.getEP() << endl;
	cout << endl;

	cout << UWHT << "Showing FragTrap's attributes..." << RESET << endl;
	cout << "Name: " << frag.getName() << endl;
	cout << "Attack point: " << frag.getAtt() << endl;
	cout << "Health point: " << frag.getHP() << endl;
	cout << "Energy point: " << frag.getEP() << endl;
	cout << endl;

	cout << UWHT << "Showing DiamondTrap's attributes..." << RESET << endl;
	cout << "Name: " << diam->getName() << endl;
	cout << "Clap name: " << diam->getClapName() << endl;
	cout << "Attack point: " << diam->getAtt() << endl;
	cout << "Health point: " << diam->getHP() << endl;
	cout << "Energy point: " << diam->getEP() << endl;
	cout << endl;

	cout << UWHT << "DiamondTrap calling whoAmI() function..." << RESET << endl;
	diam->whoAmI();
	cout << endl;

	cout << UWHT << "DiamondTrap calling FragTrap's highFiveGuys() method..." << RESET << endl;
	diam->highFiveGuys();
	cout << endl;

	cout << UWHT << "DiamondTrap calling ScavTrap's guardGate() method..." << RESET << endl;
	diam->guardGate();
	cout << endl;

	cout << UWHT << "Deleting DiamondTrap..." << RESET << endl;
	delete diam;
	cout << endl;
	return (0);
}