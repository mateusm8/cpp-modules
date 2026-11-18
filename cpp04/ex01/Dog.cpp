/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:56:32 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/18 15:11:51 by matmagal         ###   ########.fr       */
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

Dog::Dog(const Dog& copy) : Animal(copy), brain(0) {
	std::cout << "Dog Copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
}

Dog& Dog::operator=(const Dog& copy) {
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &copy){
		*brain = *copy.brain;
		type = copy.type;
	}
	return *this;
}

Dog::~Dog(){
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
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
