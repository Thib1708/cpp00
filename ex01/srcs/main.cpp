/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:25:42 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/06/14 17:22:09 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void) 
{
	PhoneBook 	repertoire;
	std::string	line;
	while (1)
	{
		std::cout << "> ";
		std::cin >> line;
		if (line.compare("SEARCH") == 0)
			repertoire.print();
		else if (line.compare("EXIT") == 0)
			break ;
		else if (line.compare("ADD") == 0)
			repertoire.add();
		else if (line.empty())
		{
			std::cout << std::endl;
			return (1);
		}
	}

	return (0);
}