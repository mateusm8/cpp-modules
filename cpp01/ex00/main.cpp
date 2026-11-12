/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 09:32:26 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/12 19:58:40 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie* lazyzombie = newZombie("LazyZombie");
	lazyzombie->announce();
	delete lazyzombie;

	randomChump("RandomZ");
	return 0;
}
