#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	ClapTrap	clap("clap");
	ScavTrap	scav("scav");

	cout << "hp" << scav.getHP() << endl << "ep" << scav.getEP() << endl << "att" << scav.getAtt() << endl;
	return (0);
}