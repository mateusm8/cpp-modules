/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 08:45:06 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/25 18:23:49 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "utils.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

PhoneBook::PhoneBook() {
	index = 0;
	contact_count = 0;
}

void PhoneBook::addContact(Contact c) {
	c_list[index] = c;
	index = (index + 1) % 8;
	if (contact_count < 8)
		contact_count++;
}

Contact PhoneBook::getContact(int i){
	return c_list[i];
}

void PhoneBook::displayTable(){
	for (int i = 0; i < contact_count; i++){
		std::string first_name = truncate(getContact(i).getFirstName());
		std::string last_name = truncate(getContact(i).getLastName());
		std::string nickname = truncate(getContact(i).getNickname());

		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << first_name << "|";
		std::cout << std::setw(10) << std::right << last_name << "|";
		std::cout << std::setw(10) << std::right << nickname << "|" << std::endl;
	}
}

void PhoneBook::displayContact(int i){
	if (i > contact_count - 1){
		std::cout << "Index invalid, contact does not exist. Back to main menu." << std::endl;
		return ;
	}
	std::cout << getContact(i).getFirstName() << std::endl;
	std::cout << getContact(i).getLastName() << std::endl;
	std::cout << getContact(i).getNickname() << std::endl;
	std::cout << getContact(i).getPhoneNumber() << std::endl;
	std::cout << getContact(i).getDarkestSecret() << std::endl;
}
