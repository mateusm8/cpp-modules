/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 10:38:59 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/10 18:19:29 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	int n = 5;
	Zombie * horde = zombieHorde(n, "Zombies");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
}
