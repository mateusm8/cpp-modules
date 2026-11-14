/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:30:34 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/07 18:33:33 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
	:	type(copy.type) {
		std::cout << "Animal Copy constructor called" << std::endl;
	}

Animal& Animal::operator=(const Animal& copy) {
	if (this != &copy)
		type = copy.type;
	std::cout << "Animal Copy assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal Destructor called" << std::endl;
}

const std::string& Animal::getType() const{
	return type;	
}

void Animal::makeSound() const {
	std::cout << "Some generic animal sound" << std::endl;
}
