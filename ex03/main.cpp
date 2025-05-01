#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	trapA("Hugo");
	ScavTrap	trapB("Tom");
	FragTrap	trapC("Paul");
	DiamondTrap	trapD("Diamond");
	
	trapD.attack("everyone!");
	trapD.whoAmI();
	trapD.highFivesGuys();
	trapD.guardGate();
	
	trapC.highFivesGuys();
	trapC.attack("Diamond");
	
	trapD.guardGate();
	trapD.attack("Paul");
	trapD.takeDamage(20);
	trapD.takeDamage(20);
	trapD.takeDamage(20);
	trapD.takeDamage(20);
	trapD.takeDamage(20);
	trapD.takeDamage(20);
	trapD.takeDamage(20);
	trapB.takeDamage(20);
	trapD.attack("Tom");
	trapA.attack("Tom");
	trapB.takeDamage(2);
	trapB.attack("Paul");
	trapC.takeDamage(7);
	trapC.attack("Hugo");
	trapA.takeDamage(5);
	trapA.beRepaired(3);
	trapB.attack("Hugo");
	trapA.takeDamage(2);
	trapC.attack("Tom");
	trapA.attack("Tom");
	trapB.takeDamage(2);
	trapB.attack("Paul");
	trapC.takeDamage(7);
	trapC.attack("Hugo");
	trapA.takeDamage(5);
	trapA.beRepaired(3);
	trapB.attack("Hugo");
	trapA.takeDamage(2);
	trapC.attack("Tom");
	trapC.beRepaired(5);
	trapA.beRepaired(3);
	trapB.beRepaired(3);
	trapD.beRepaired(6);
	return (0);
}