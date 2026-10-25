/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:18:35 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/01 22:53:05 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main()
{
	Fixed a(1.5f);
	Fixed b(2.0f);
	Fixed increment(1);
	Fixed decrement(1);
	const Fixed c(3);
	const Fixed d(4);

	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "b - a: " << (b - a) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "b / a: " << (b / a) << std::endl;

	std::cout << "Pre-increment: " << ++increment << std::endl;
	std::cout << "Pos-increment: " << increment++ << std::endl;
	std::cout << "After pos-increment: " << increment << std::endl;

	std::cout << "Pre-decrement: " << --decrement << std::endl;
	std::cout << "Pos-decrement: " << decrement-- << std::endl;
	std::cout << "After post-decrement: " << decrement << std::endl;

	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(c, d): " << Fixed::min(c, d) << std::endl;
	std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;

	return 0;
}
