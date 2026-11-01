/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 09:58:18 by matmagal          #+#    #+#             */
/*   Updated: 2026/06/24 10:36:07 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include <iostream>

Zombie::Zombie(){
	name = "";
}

void	Zombie::setName(std::string n){
	name = n;
}

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
	std::cout << name << " was destroyed" << std::endl;
}
