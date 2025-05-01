/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 21:20:12 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/01 22:03:51 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name):ClapTrap(name + "_clap_name"),ScavTrap(name),FragTrap(name),_name(name)
{
    std::cout << "DiamondTrap constructor called for " << _name << std::endl;
    e_points = ScavTrap::e_points;
    h_points = FragTrap::h_points;
    damage = FragTrap::damage;
}
DiamondTrap::DiamondTrap(const DiamondTrap &o):ClapTrap(o),ScavTrap(o),FragTrap(o)
{
    *this = o;
    std::cout << "DiamondTrap copy constructor called for " << _name << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called for " << _name << std::endl;
}
void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is "<< _name << " and ClapTrap name is  " << name << std::endl;   
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &o)
{
    if (this != &o)
    {
        ClapTrap::operator=(o);
        this->_name = o._name;
        this->h_points = o.h_points;
        this->e_points = o.e_points;
        this->damage = o.damage;
    }
    std::cout << "DiamondTrap " << o._name  << " was assigned and set with";
    return(*this);
}