/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 18:54:56 by matmagal          #+#    #+#             */
/*   Updated: 2026/06/24 19:41:03 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "weapon.hpp"
#include <string>

class HumanB {
	private:
		std::string name;
		Weapon* type;
	public:
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon& w);
};

#endif
