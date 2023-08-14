/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:23:00 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/08/14 11:10:23 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact ( void ) {
	std::cout << "[ CONTACT ] Constructor called" << std::endl;
	return ;
}

Contact::~Contact ( void ) {
	std::cout << "[ CONTACT ] Destructor called" << std::endl;
	return ;
}

void	Contact::print_line ( void ) {
	std::cout << "|         " << this->_index << "|";
	print_ten(this->_first_name);
	std::cout << "|";
	print_ten(this->_last_name);
	std::cout << "|";
	print_ten(this->_nickname);
	std::cout << "|";
	std::cout << std::endl;
}

void	Contact::print_ten ( std::string str ) {
	if (str.length() > 10)
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		for (size_t i = 0; i < 10 - str.length(); i++)
			std::cout << " ";
		std::cout << str;	
	}
}

std::string	Contact::get_info( std::string str ) {
    std::string input = "";

    do {
			std::cout << str;
     		getline(std::cin, input);
			if (std::cin.eof())
				return (input);
		} while (input.length() == 0 && !std::cin.eof());
        return (input);
}

void	Contact::print_all ( void ) {
	std::cout << "First name : " << this->_first_name << std::endl;
	std::cout << "Last name : " << this->_last_name << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone number : " << this->_phone_number << std::endl;
	std::cout << "Darkest secret : " << this->_darkest_secret << std::endl;
}

void	Contact::new_contact ( int index ) {
	std::cin.ignore();
	this->_index = index + 1;
	this->_first_name = get_info("First name : ");
	if (std::cin.eof())
		return ;
	this->_last_name = get_info("Last name : ");
	if (std::cin.eof())
			return ;
	this->_nickname = get_info("Nickname : ");
	if (std::cin.eof())
			return ;
	this->_phone_number = get_info("Phone number : ");
	if (std::cin.eof())
			return ;
	this->_darkest_secret = get_info("Darkest secret : ");
	if (std::cin.eof())
			return ;
}