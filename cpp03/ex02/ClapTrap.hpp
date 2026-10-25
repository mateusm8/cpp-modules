/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 21:46:35 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/16 22:38:39 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	protected:
		ClapTrap(const std::string& name, int hitPoints,
			int energyPoints, int attackDamage);
		bool tryUseEnergy();
		bool checkHitPoints();
		std::string getName();
		int	getAttackDamage();
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& copy);
		~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int nb);
		void beRepaired(unsigned int nb);
};

#endif
