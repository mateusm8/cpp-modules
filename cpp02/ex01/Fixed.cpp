/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:00:18 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/14 19:06:16 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _rawBits(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy) : _rawBits(copy._rawBits){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copy){
	if (this != &copy)
		_rawBits = copy._rawBits;
	return *this;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
	return _rawBits;
}

void Fixed::setRawBits(int const raw){
	_rawBits = raw;
}

float Fixed::toFloat(void) const {
	return _rawBits / static_cast<float>(1 << this->_fractionalBits);
}

int	Fixed::toInt(void) const {
	return _rawBits / (1 << this->_fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
	out << value.toFloat();
	return out;
}

Fixed::Fixed(int value) : _rawBits(value * (1 << this->_fractionalBits)){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value) : _rawBits(roundf(value * (1 << this->_fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}


