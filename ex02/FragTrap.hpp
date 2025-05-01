/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:53:46 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/01 17:25:58 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap:public ClapTrap
{
    public:
        FragTrap(const std::string &n);
        FragTrap(const FragTrap &o);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &o);
        void highFivesGuys(void);
};

#endif 