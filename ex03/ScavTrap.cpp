/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:31 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/01 21:54:12 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string &target)
{
    if(h_points <= 0)
    {std::cout << "ScavTrap ..." << name << " is dead"<<std::endl;
        return;}
    else if(e_points <= 0)
        std::cout << "ScavTrap "<< name << "no energy point"<<std::endl;
    else
        --this->e_points;std::cout << "ScavTrap " << name << " attacks "<< target << ", causing "<< damage << " points of damage!"<<std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &o)
{
    std::cout << "ScavTrap copy assignment called "<< std::endl;
    ClapTrap::operator=(o);
    return (*this);
}
ScavTrap::ScavTrap(const ScavTrap &a):ClapTrap(a)
{std::cout << "ScavTrap Copy Constructor called" << std::endl;}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string n):ClapTrap(n)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->damage = 20;
    this->e_points = 50;
    this->h_points = 100;
}
void ScavTrap::guardGate()
{
    std::cout << " ScavTrap is now in Gate keeper mode." << std::endl;
}