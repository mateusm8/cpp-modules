/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:18:35 by matmagal          #+#    #+#             */
/*   Updated: 2026/09/27 20:24:28 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(){
	Fixed original;

	std::cout << "Start value: " << original.getRawBits() << std::endl;
	
	original.setRawBits(42);
	std::cout << "Value of original: " << original.getRawBits() << std::endl;

	Fixed copy(original);
	std::cout << "Value of copy: " << copy.getRawBits() << std::endl;

	copy.setRawBits(100);
	std::cout << "Original after chantes copy: "
		<< original.getRawBits() << std::endl;
	std::cout << "Copy after change: " << copy.getRawBits() << std::endl;

	Fixed assigned;
	assigned = original;
	std::cout << "assigned value: " << assigned.getRawBits() << std::endl;

	return 0;
}
