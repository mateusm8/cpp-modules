/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:38:13 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/20 18:03:31 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20){
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy){
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy){
	if (this != &copy){
		ClapTrap::operator=(copy);
		std::cout << "ScavTrap assignment operator called" << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (!checkHitPoints())
		std::cout << "ScavTrap " << getName() << " is out of combat" << std::endl;
	else if (!tryUseEnergy())
		std::cout << "ScavTrap " << getName() << " has no energy" << std::endl;
	else {
		std::cout << "ScavTrap " << getName() << " attacks " << target << 
		" causing " << getAttackDamage() << " points of damage" << std::endl;
	}
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap entered in a Gate keeper mode" << std::endl;
}
