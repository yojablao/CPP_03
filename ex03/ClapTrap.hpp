/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:24 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/02 18:36:18 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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