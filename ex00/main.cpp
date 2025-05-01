#include "ClapTrap.hpp"

int main() {
    ClapTrap bob("BOB");

    std::cout << "\n--- Start Testing ---\n" << std::endl;

    bob.attack("TARGET");
    bob.takeDamage(6);  
    bob.beRepaired(7);
    bob.takeDamage(7);  
    bob.takeDamage(7);   //(dead)
    bob.attack("TARGET"); // Should not work (dead)
    bob.beRepaired(5);    // Should not work (dead)

    std::cout << "\n--- End Testing ---" << std::endl;

    return 0;
}