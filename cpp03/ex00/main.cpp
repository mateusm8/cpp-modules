/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 20:35:11 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/16 20:58:40 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap bot1("Robot_1");
	ClapTrap bot2("Robot_2");
	ClapTrap Copy(bot1);
	ClapTrap assigned;

	bot2.takeDamage(5);
	bot2.beRepaired(1);
	bot1.attack("Robot_Y");

	assigned = bot2;

	assigned.takeDamage(2);
	assigned.attack("Robot_X");
	bot1.takeDamage(10);
	bot2.beRepaired(1);
	bot2.beRepaired(1);
	bot2.beRepaired(1);
	bot2.beRepaired(1);
	bot2.beRepaired(1);
	bot2.beRepaired(1);
	bot2.beRepaired(1);
	bot2.beRepaired(1);
	bot2.beRepaired(1);
	bot2.beRepaired(1);
	bot1.attack("Robot_Y");
	bot2.attack("Robot_X");
	Copy.attack("Robot_Z");
	bot1.beRepaired(4);
	
	

	return 0;
	
}
