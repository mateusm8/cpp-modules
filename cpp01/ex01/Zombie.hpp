/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 09:55:09 by matmagal          #+#    #+#             */
/*   Updated: 2026/06/24 10:42:32 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie{
	private:
		std::string name;
	public:
		Zombie();
		void setName(std::string n);
		void announce();
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
