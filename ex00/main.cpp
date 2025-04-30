#include "ClapTrap.hpp"

int main() {
    ClapTrap bob("BOB");

    std::cout << "\n--- Start Testing ---\n" << std::endl;

    bob.attack("TARGET");
    bob.beRepaired(7);
    bob.takeDamage(7);   // Should bring HP to 0 or below
    bob.attack("TARGET"); // Should not work (no HP or energy)
    bob.beRepaired(5);    // Should not work (dead)

    std::cout << "\n--- End Testing ---" << std::endl;

    return 0;
}
