/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 16:17:01 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/18 15:25:27 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat() : brain(0) {
	type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& copy) : Animal(copy), brain(0) {
	std::cout << "Cat Copy constructor called" << std::endl;
	brain = new Brain(*copy.brain);
}

Cat& Cat::operator=(const Cat& copy) {
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &copy){
		*brain = *copy.brain;
		type = copy.type;
	}
	return *this;
}

Cat::~Cat(){
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "A cat meows" << std::endl;
}

void Cat::setCatIdeas(std::string str, int index){
	this->brain->setIdeas(str, index);
}

std::string Cat::getCatIdeas(int index) const{
	return this->brain->getIdeas(index);
}
