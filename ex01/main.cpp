
#include "ScavTrap.hpp"

int main()
{
    std::cout << "--- Create ClapTrap ---" << std::endl;
    ClapTrap base("CLAPPY");

    std::cout << "\n--- Create ScavTrap ---" << std::endl;
    ScavTrap derived("scav");

    std::cout << "\n--- Base attacks ---" << std::endl;
    base.attack("enemy A");

    std::cout << "\n--- Derived attacks ---" << std::endl;
    derived.attack("enemy B");

    std::cout << "\n--- Derived takes damage ---" << std::endl;
    derived.takeDamage(30); // From ClapTrap

    std::cout << "\n--- Derived repairs ---" << std::endl;
    derived.beRepaired(20); // From ClapTrap

    std::cout << "\n--- Derived uses unique ability ---" << std::endl;
    derived.guardGate(); // Only in ScavTrap

    std::cout << "\n--- End of Scope ---" << std::endl;
    return 0;
}
