/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:56:32 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/07 16:08:07 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& copy) : Animal(copy) {
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy) {
	if (this != &copy)
		type = copy.type;
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "A dog barks" << std::endl;
}
