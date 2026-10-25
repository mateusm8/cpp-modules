/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 23:01:40 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/16 23:04:00 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
	FragTrap bot1("Robot_1");

	bot1.highFivesGuys();
	bot1.attack("Robot_Y");
	bot1.beRepaired(4);
	bot1.takeDamage(20);
}
