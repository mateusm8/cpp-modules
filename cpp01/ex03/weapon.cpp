/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 18:42:45 by matmagal          #+#    #+#             */
/*   Updated: 2026/06/24 19:18:58 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"

Weapon::Weapon(std::string w_type){
	type = w_type;
}

void Weapon::setType(std::string w_type){
	type = w_type;
}

const std::string& Weapon::getType() const{
	return type;
}

