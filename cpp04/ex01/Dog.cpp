/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:56:32 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/09 20:40:59 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog() {
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
	brain = (new Brain());
}

Dog::Dog(const Dog& copy) : Animal(copy), brain(new Brain(*copy.brain)) {
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy) {
	if (this != &copy){
		*brain = *copy.brain;
		type = copy.type;
	}
	std::cout << "Dog Copy assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << std::endl;
	delete brain;
}

void Dog::makeSound() const {
	std::cout << "A dog barks" << std::endl;
}

void Dog::setDogIdeas(std::string str, int index){
	this->brain->setIdeas(str, index);
}

std::string Dog::getDogIdeas(int index) const {
	return this->brain->getIdeas(index);
}
