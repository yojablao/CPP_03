
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "--- Create ClapTrap ---" << std::endl;
    ClapTrap clap("CLAPPY");

    std::cout << "\n--- Create ScavTrap ---" << std::endl;
    ScavTrap scav("SCAVVY");

    std::cout << "\n--- Create FragTrap ---" << std::endl;
    FragTrap frag("FRAGGY");

    std::cout << "\n--- Base attack ---" << std::endl;
    clap.attack("target A");

    std::cout << "\n--- Derived attack (ScavTrap) ---" << std::endl;
    scav.attack("target B");

    std::cout << "\n--- Derived attack (FragTrap) ---" << std::endl;
    frag.attack("target C");

    std::cout << "\n--- Damage and Repair ---" << std::endl;
    scav.takeDamage(30);
    scav.beRepaired(20);

    std::cout << "\n--- Special abilities ---" << std::endl;
    scav.guardGate();
    frag.highFivesGuys();

    std::cout << "\n--- End of Scope ---" << std::endl;
    return 0;
}
