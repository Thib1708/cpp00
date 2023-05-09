/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:25:42 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/09 14:50:29 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../Contact.class.hpp"
#include "../PhoneBook.class.hpp"

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
	}

	return (0);
}