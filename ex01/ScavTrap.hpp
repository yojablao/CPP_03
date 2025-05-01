#ifndef SCAVTRAP__HPP
#define SCAVTRAP__HPP
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    public:
    ScavTrap(std::string name); 
    ScavTrap(const ScavTrap &a); 
    ~ScavTrap();
    ScavTrap &operator=(const ScavTrap &a);
    void attack(const std::string& target);
    void guardGate();
};
#endif