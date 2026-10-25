/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 18:46:18 by matmagal          #+#    #+#             */
/*   Updated: 2026/06/24 19:37:43 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "weapon.hpp"
#include <string>

class HumanA {
	private:
		std::string name;
		Weapon* type;
	public:
		HumanA(std::string pname, Weapon& weapon);
		void attack();
};

#endif
