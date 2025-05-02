/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:34 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/02 18:40:29 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
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