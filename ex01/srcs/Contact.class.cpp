/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:23:00 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/09 15:56:38 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../class/Contact.class.hpp"

Contact::Contact ( void ) {
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact ( void ) {
	std::cout << "Destructor called" << std::endl;
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
		for (int i = 0; i < 10 - str.length(); i++)
			std::cout << " ";
		std::cout << str;	
	}
}

std::string	Contact::get_info( std::string str ) {
	std::string info = "";
	bool		isvalid = false;

	while (!isvalid)
	{
		std::cout << str << std::flush;
		std::cin.clear();
		std::getline(std::cin, info);
		if (std::cin.good() && info.empty())
			std::cout << "This information can't be empty" << std::endl;
		else 
			isvalid = true;
	}
	return (info);
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
	this->_last_name = get_info("Last name : ");
	this->_nickname = get_info("Nickname : ");
	this->_phone_number = get_info("Phone number : ");
	this->_darkest_secret = get_info("Darkest secret : ");
}