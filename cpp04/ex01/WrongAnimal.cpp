/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:40:13 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/07 18:44:24 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
	:	type(copy.type) {
		std::cout << "Wrong Animal Copy constructor called" << std::endl;
	}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
	if (this != &copy)
		type = copy.type;
	std::cout << "Wrong Animal Copy assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

const std::string& WrongAnimal::getType() const{
	return type;	
}

void WrongAnimal::makeSound() const {
	std::cout << "The animal made an unidentified strange noise" << std::endl;
}
