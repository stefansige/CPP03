#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap2("Rurik");
	ClapTrap clapTrap3(clapTrap2);
	ClapTrap clapTrap4;
	clapTrap4 = clapTrap3;

	clapTrap2.attack("Monster");
	clapTrap2.takeDamage(5);
	clapTrap2.attack("Princess");
	clapTrap2.beRepaired(5);
	clapTrap2.takeDamage(10);
	clapTrap2.attack("Pig");
	clapTrap2.takeDamage(10);
	clapTrap2.beRepaired(5);
	clapTrap3.attack("Beast");
	clapTrap4.attack("Dragon");
	return 0;
}
