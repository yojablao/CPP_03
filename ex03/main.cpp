#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	std::cout << std::endl;
	DiamondTrap a( "XD" );
	std::cout << std::endl;
	DiamondTrap b( "Alfonso" );
	std::cout << std::endl;
	std::cout << std::endl;
	a.attack("Me");
	a = b;
	std::cout << std::endl;
	a.whoAmI();
	std::cout << std::endl;
}