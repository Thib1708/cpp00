/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:25:42 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/08/30 10:10:59 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void) 
{
	PhoneBook 	repertoire;
	std::string	line;
	std::cout << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "| COMMANDS |" << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "| ADD      |" << std::endl;
	std::cout << "| SEARCH   |" << std::endl;
	std::cout << "| EXIT     |" << std::endl;
	std::cout << "------------" << std::endl;
	while (line.compare("EXIT") != 0)
	{
		//std::cout << "> ";
		std::cin >> line;
		if (line.compare("SEARCH") == 0)
			repertoire.print();
		else if (line.compare("ADD") == 0)
			repertoire.add();
		if (std::cin.eof())
		{
			return (std::cout << std::endl << std::endl << "Exiting phoneBook..." << std::endl, 1);
		}
	}
	std::cout << std::endl << std::endl << "Exiting phoneBook..." << std::endl;
	return (0);
}