/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:15 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/01 17:25:21 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string &n):ClapTrap(n)
{   
    std::cout << "FragTrap constructer called" << std::endl;
    this->h_points = 100;
    this->e_points = 100;
    this->damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destractor  called his name is " << name << std::endl;
    
}
FragTrap::FragTrap(const FragTrap &o)
{
    std::cout << "FragTrap copy constructer called" << std::endl;
    *this = o;
}
FragTrap &FragTrap::operator=(const FragTrap &o)
{
    std::cout << "FragTrap copy assignment called" << std::endl;
    ClapTrap::operator=(o);
    return(*this);
}
void FragTrap::highFivesGuys(void)
{
    std::cout << name << " give positive high-fives."<<std::endl;
}
