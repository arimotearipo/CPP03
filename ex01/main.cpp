#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	// ClapTrap	clap("clap");
	ClapTrap	*scav = new ScavTrap("scav");

	// cout << "hp" << scav.getHP() << endl << "ep" << scav.getEP() << endl << "att" << scav.getAtt() << endl;
	delete scav;
	// system("leaks ClapTrap");
	return (0);
}