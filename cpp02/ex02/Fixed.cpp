/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:00:18 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/01 22:49:26 by matmagal         ###   ########.fr       */
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
	return _rawBits / 256.0f;
}

int	Fixed::toInt(void) const {
	return _rawBits / 256;
}

std::ostream& operator<<(std::ostream& out, const Fixed& value) {
	out << value.toFloat();
	return out;
}

Fixed::Fixed(int value) : _rawBits(value * 256){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float value) : _rawBits(roundf(value * 256)) {
	std::cout << "Float constructor called" << std::endl;
}

bool Fixed::operator<(const Fixed& value) const {
	return _rawBits < value._rawBits;
}

bool Fixed::operator>(const Fixed& value) const {
	return _rawBits > value._rawBits;
}

bool Fixed::operator<=(const Fixed& value) const {
	return _rawBits <= value._rawBits;
}

bool Fixed::operator>=(const Fixed& value) const {
	return _rawBits >= value._rawBits;
}

bool Fixed::operator==(const Fixed& value) const {
	return _rawBits == value._rawBits;
}

bool Fixed::operator!=(const Fixed& value) const {
	return _rawBits != value._rawBits;
}

Fixed Fixed::operator+(const Fixed& value) const {
	Fixed result;

	result.setRawBits(_rawBits + value._rawBits);
	return result;
}

Fixed Fixed::operator-(const Fixed& value) const {
	Fixed result;

	result.setRawBits(_rawBits - value._rawBits);
	return result;
}

Fixed Fixed::operator*(const Fixed& value) const {
	Fixed result;

	result.setRawBits((_rawBits * value._rawBits) / 256);
	return result;
}

Fixed Fixed::operator/(const Fixed& value) const {
	Fixed result;

	result.setRawBits((_rawBits * 256) / value._rawBits);
	return result;
}

Fixed& Fixed::operator++() {
	++_rawBits;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed value;

	value.setRawBits(_rawBits++);
	return value;
}

Fixed& Fixed::operator--() {
	--_rawBits;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed value;
	
	value.setRawBits(_rawBits--);
	return value;
}

Fixed& Fixed::min(Fixed& value1, Fixed& value2) {
	if (value1.operator<(value2))
		return value1;
	else
		return value2;
}

const Fixed& Fixed::min(const Fixed& value1, const Fixed& value2) {
	if (value1.operator<(value2))
		return value1;
	else
		return value2;
}

Fixed& Fixed::max(Fixed& value1, Fixed& value2) {
	if (value1.operator>(value2))
		return value1;
	else
		return value2;
}

const Fixed& Fixed::max(const Fixed& value1, const Fixed& value2) {
	if (value1.operator>(value2))
		return value1;
	else
		return value2;
}
