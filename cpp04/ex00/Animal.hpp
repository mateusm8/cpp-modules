/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 15:16:12 by matmagal          #+#    #+#             */
/*   Updated: 2026/11/07 15:56:01 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& copy);
		virtual ~Animal();
		
		const std::string&	getType() const;
		virtual void	makeSound() const;
};

#endif
