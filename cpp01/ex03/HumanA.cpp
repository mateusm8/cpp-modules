/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 18:58:19 by matmagal          #+#    #+#             */
/*   Updated: 2026/06/24 19:37:29 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string pname, Weapon& weapon) : name(pname), type(&weapon) {
}

void HumanA::attack(){
    std::cout << name << " attacks with their " << type->getType() << std::endl;
}

