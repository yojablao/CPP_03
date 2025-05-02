#ifndef DIAMONDTRAP_HPP 
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap : public ScavTrap  ,public  FragTrap
{
    std::string _name;
    public:
        DiamondTrap(const std::string &name);
        DiamondTrap(const DiamondTrap &o);
        DiamondTrap &operator=(const DiamondTrap &o);
        ~DiamondTrap();
        void attack(const std::string &target);
        void whoAmI();
};
#endif