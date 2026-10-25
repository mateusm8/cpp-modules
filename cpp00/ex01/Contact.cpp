/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 08:44:13 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/25 18:23:44 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(const std::string& name){
	first_name = name;
}
void Contact::setLastName(const std::string& name){
	last_name = name;
}
void Contact::setNickname(const std::string& name){
	nickname = name;
}
void Contact::setPhoneNumber(const std::string& number){
	phone_number = number;
}
void Contact::setDarkestSecret(const std::string& secret){
	darkest_secret = secret;
}
std::string Contact::getFirstName() const{
	return first_name;
}
std::string Contact::getLastName() const{
	return last_name;
}
std::string Contact::getNickname() const{
	return nickname;
}
std::string Contact::getPhoneNumber() const{
	return phone_number;
}
std::string Contact::getDarkestSecret() const{
	return darkest_secret;
}

