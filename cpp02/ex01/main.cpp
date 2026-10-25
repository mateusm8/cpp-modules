/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 20:18:35 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/01 18:47:44 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(){
	Fixed fixedInt = 10;
	Fixed fixedFloat = 42.42f;
	Fixed fixedCopy(fixedInt);
	Fixed assgned;

	assgned = fixedFloat;

	std::cout << "fixedInt: " << fixedInt << std::endl;
	std::cout << "fixedInt as int: " << fixedInt.toInt() << std::endl;
	std::cout << "fixedInt as float: " << fixedInt.toFloat() << std::endl;

	
	std::cout << "fixedFloat: " << fixedFloat << std::endl;
	std::cout << "fixedFloat as int: " << fixedFloat.toInt() << std::endl;
	std::cout << "fixedFloat as float: " << fixedFloat.toFloat() << std::endl;

	std::cout << "Copy of fixedInt: " << fixedCopy << std::endl;
	std::cout << "assigned: " << assgned << std::endl;

	return 0;
}
