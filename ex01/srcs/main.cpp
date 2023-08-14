/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:25:42 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/08/14 11:10:01 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void) 
{
	PhoneBook 	repertoire;
	std::string	line;
	while (line.compare("EXIT") != 0)
	{
		std::cout << "> ";
		std::cin >> line;
		if (line.compare("SEARCH") == 0)
			repertoire.print();
		else if (line.compare("ADD") == 0)
			repertoire.add();
		if (std::cin.eof())
		{
			return (std::cout << std::endl << std::endl << "Exiting phoneBook.." << std::endl, 1);
		}
	}

	return (0);
}