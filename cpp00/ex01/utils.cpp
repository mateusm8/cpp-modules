/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 19:07:02 by matmagal          #+#    #+#             */
/*   Updated: 2026/06/24 08:59:07 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include <cctype>

std::string truncate(std::string str){
	if (str.size() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

std::string to_upper(std::string str){
	for (size_t i = 0; i < str.size(); i++)
		str[i] = std::toupper(str[i]);
	return str;
}

int is_number(std::string str){
	if (str.empty())
		return 0;
	for (size_t i = 0; i < str.size(); i++){
		if (str[i] < '0' || str[i] > '9')
			return 0;
	}
	return 1;
}
