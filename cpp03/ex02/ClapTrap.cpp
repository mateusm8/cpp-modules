/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 08:35:12 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/16 22:38:59 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) 
	:	name(name),
		hitPoints(10),
		energyPoints(10),
		attackDamage(0){
	std::cout << "Named constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
	:	name(copy.name),
		hitPoints(copy.hitPoints),
		energyPoints(copy.energyPoints),
		attackDamage(copy.attackDamage){
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, int hitPoints,
	int energyPoints, int attackDamage)
	:	name(name),
		hitPoints(hitPoints),
		energyPoints(energyPoints),
		attackDamage(attackDamage){
	std::cout << "Heritage constructor called"	<< std::endl;		
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy){
	if (this != &copy){
		name = copy.name;
		hitPoints = copy.hitPoints;
		energyPoints = copy.energyPoints;
		attackDamage = copy.attackDamage;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " is out of combat" << std::endl;
	else if (energyPoints <= 0)
		std::cout << "ClapTrap " << name << " has no energy" << std::endl;
	else {
		energyPoints -= 1;	
		std::cout << "ClapTrap " << name << " attacks " << target << " causing " 
			<< attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int nb){
	if (hitPoints == 0){
		std::cout << "ClapTrap " << name << " have " << hitPoints << " and died"
			<< std::endl;
		return ;
	}
	else if (static_cast<unsigned int>(hitPoints) < nb)
		hitPoints = 0;
	else
		hitPoints -= static_cast<int>(nb);
	if (hitPoints > 0)
		std::cout << "ClapTrap " << name << " lost " << nb
			<< " hitpoints, and now have " << hitPoints << " hitpoints" << std::endl;
	else
		std::cout << "ClapTrap " << name << " have " << hitPoints << " and died"
			<< std::endl;
}

void ClapTrap::beRepaired(unsigned int nb){
	if (hitPoints > 0 && energyPoints > 0){
		hitPoints += nb;
		energyPoints -= 1;
		std::cout << "ClapTrap " << name << " has used 1 of energy to restore "  << nb
			<< " hitpoints" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " can't be repaired" << std::endl;
}

bool ClapTrap::tryUseEnergy(){
	if (energyPoints > 0){
		energyPoints -= 1;
		return 1;
	}
	else
		return 0;
}

bool ClapTrap::checkHitPoints(){
	return hitPoints > 0;
}

std::string ClapTrap::getName(){
	return name;
}

int ClapTrap::getAttackDamage(){
	return attackDamage;
}
