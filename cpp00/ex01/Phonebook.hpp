/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 21:13:38 by matmagal          #+#    #+#             */
/*   Updated: 2026/10/25 18:23:58 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact c_list[8];
		int		index;
		int		contact_count;
	public:
		PhoneBook();
		void addContact(Contact c);
		Contact getContact(int i);
		void displayTable();
		void displayContact(int i);
};

#endif
