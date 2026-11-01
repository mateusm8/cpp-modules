/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 09:32:26 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/25 18:50:08 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void){
	Zombie* heap = newZombie("Heap");
	heap->announce();
	delete heap;

	randomChump("Stack");
	return 0;
}
