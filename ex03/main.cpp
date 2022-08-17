#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	ClapTrap	clap("A8u");
	cout << endl;
	ScavTrap	scav("Brav0");
	cout << endl;
	FragTrap	frag("Ch@rl13");
	cout << endl;
	DiamondTrap	diam("D3lt@");
	diam.whoAmI();
	cout << endl;
	return (0);
}