/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:01:23 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/01 14:24:22 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void)
{
    std::cout << "default constructor caled" << std::endl;
    this->name = "";
    this->damage = 0;
    this->e_points = 10;
    this->h_points = 10;
    
}
ClapTrap::ClapTrap(std::string n)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = n;
    this->damage = 0;
    this->e_points = 10;
    this->h_points = 10;
}
ClapTrap::ClapTrap(ClapTrap const &o)
{
    std::cout << "copy constructor caled" << std::endl;
    *this = o;
}
ClapTrap & ClapTrap::operator=(ClapTrap const  &a)
{
    std::cout << "copy assignment called" << std::endl;
    this->name = a.name;
    this->damage = a.damage;
    this->e_points = a.e_points;
    this->h_points = a.h_points;
    return(*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}
void ClapTrap::attack(const std::string &target)
{
    if(h_points <= 0)
    {std::cout <<  name << " is dead"<<std::endl;
        return;}
    else if(e_points <= 0)
        std::cout << "no energy point"<<std::endl;
    else
        --this->e_points;std::cout << "ClapTrap " << name << " attacks "<< target << ", causing "<< damage << " points of damage!"<<std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(h_points <= 0)
    {std::cout <<  name << " is dead"<<std::endl;
        return;}
    else if(e_points <= 0){std::cout << "no energy point"<<std::endl;}
    else
        --this->e_points;this->h_points += amount;std::cout << "ClapTrap " << name << " repaired by "<< amount << " !"<<std::endl;
    
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(h_points <= 0){std::cout <<  name << " is dead"<<std::endl;
        return;}
    else if(e_points <= 0){std::cout << "no energy point"<<std::endl;}
    else
    {
        --this->e_points;
        h_points -= amount;
        std::cout << name << " takes " << amount << " damage. HP now: " << h_points << std::endl;
        
    }
}