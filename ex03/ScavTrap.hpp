/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:34 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/01 21:10:04 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP__HPP
#define SCAVTRAP__HPP
#include "ClapTrap.hpp"

class ScavTrap:virtual public ClapTrap
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