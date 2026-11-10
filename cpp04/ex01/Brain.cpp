/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 17:30:04 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/09 18:58:11 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <stdexcept>

Brain::Brain(){
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
	: ideas(copy.ideas){
		std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& copy){
	if (this != &copy){
		for (size_t i = 0; i < 100; i++)
			ideas[i] = copy.ideas[i];
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdeas(std::string str, int index){
	if (index >= 0 && index <= 99)
		ideas[index] = str;
	else
		throw std::out_of_range("Brain index must be between 0 and 99");
}

std::string Brain::getIdeas(int index) const{
	if (index >= 0 && index <= 99)
		return ideas[index];
	throw std::out_of_range("Brain index must be between 0 and 99");
}
