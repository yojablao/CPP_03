#ifndef CLAPTRAP__HPP
#define CLAPTRAP__HPP

#include <iostream>
class ClapTrap
{
    protected:
        std::string name;
        int e_points;
        int h_points;
        int damage;
    public:
        ClapTrap();
        ClapTrap(std::string n);
        ClapTrap(ClapTrap const &a);
        ClapTrap &operator=( ClapTrap const  &a);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();

};




#endif