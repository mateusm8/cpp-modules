/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 22:08:54 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/01 18:12:29 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "utils.hpp"
#include <iostream>
#include <cstdlib>

std::string message(std::string str){
	std::string input;
	
	while (1){
		std::cout << "Enter " << str << ": ";
		if (std::getline(std::cin, input)){
			if (!input.empty())
				break ;
			else
				std::cout << "Param invalid, try again!" << std::endl;	
		}
		else
			break ;
	}
	return input ;
}

int new_contact(PhoneBook& phonebook){
	Contact new_contact;
	
	std::string str;
	int i = 0;
	str = message("first name");
	if (!str.empty()){
		new_contact.setFirstName(str);
		i++;
	}
	str = message("last name");
	if (!str.empty()){
		new_contact.setLastName(str);
		i++;
	}
	str = message("nickname");
	if (!str.empty()){
		new_contact.setNickname(str);
		i++;
	}
	str = message("phone number");
	if (!str.empty()){
		new_contact.setPhoneNumber(str);
		i++;
	}
	str = message("darkest secret");
	if (!str.empty()){
		new_contact.setDarkestSecret(str);
		i++;
	}
	if (i == 5){
		phonebook.addContact(new_contact);
		return 1;
	}
	else
		return 0;
}

int main(void){
	PhoneBook phonebook;
	
	while (1){
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::string input;
		if (!std::getline(std::cin, input))
			break ;
		input = to_upper(input);
		if (input.compare("ADD") == 0){
			if (new_contact(phonebook) == 1)
				continue;
			else
				std::cout << "Unable to add contact." << std::endl;
		}
		else if (input.compare("SEARCH") == 0){
			phonebook.displayTable();
			std::cout << "Let me know the index number of the contact that you wanna see: ";
			std::string index;
			if (!std::getline(std::cin, index))
				break ;
			std::size_t	lenght = index.size();
			if (lenght > 2){
				std::cout << "Invalid argument" << std::endl;
				continue ;
			}
			if (is_number(index))
				phonebook.displayContact(std::atoi(index.c_str()));
			else
				std::cout << "Invalid number" << std::endl;
		}
		else if (input.compare("EXIT") == 0){
			break ;
		}
	}
	return 0;
}

