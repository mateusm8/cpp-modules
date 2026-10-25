/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matmagal <matmagal@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 08:56:17 by matmagal          #+#    #+#             */
/*   Updated: 2026/06/26 10:29:43 by matmagal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

std::string search_and_replace(std::string s1, std::string s2, std::string content){
	std::string result = "";
	std::size_t pos = 0;
	std::size_t start = 0;
	std::size_t new_pos = content.find(s1, pos);
	while (new_pos != std::string::npos) {
		result += content.substr(start, new_pos - start);
		result += s2;
		start = new_pos + s1.length();
		pos = start;
		new_pos = content.find(s1, pos);
	}
	result += content.substr(start);
	return result;
}

int main(int ac, char **av){
	if (ac != 4){
		std::cout << "Number of params are invalid" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::ifstream file(filename.c_str());
	if (!file.is_open()){
		std::cout << "File cannot be openned." << std::endl;
		return 1;
	}
	std::string content;
	char c;
	while (file.get(c)){
		content += c;
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty()){
		std::cout << "Empty s1 string." << std::endl;
		return 1;
	}
	content = search_and_replace(s1, s2, content);
	std::string output = filename + ".replace";
	std::ofstream output_file(output.c_str());
	if (!output_file.is_open()) {
		std::cout << "Cannot create output file" << std::endl;
		return 1;
	}
	output_file << content;
	output_file.close();
	return 0;
}
