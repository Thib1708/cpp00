/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:44:48 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/08/14 11:12:26 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	std::cout << "[ PHONEBOOK ] Constructor called" << std::endl;
	this->_nb_contact = 0;
	this->_current_contact = 0;
	return ;
}

PhoneBook::~PhoneBook( void )
{
	std::cout << "[ PHONEBOOK ] Destructor called" << std::endl;
	return ;
}

void	PhoneBook::add ( void )
{
	this->_contacts[this->_current_contact].new_contact(this->_current_contact);
	if (this->_nb_contact < 8)
		this->_nb_contact++;
	this->_current_contact++;
	if (this->_current_contact == 8)
		this->_current_contact = 0;
}

void	PhoneBook::print( void )
{
	int	i;
	int	index = -1;
	
	i = -1;
	std::cout << "------------------ Contact ------------------" << std::endl;
	while (++i < this->_nb_contact)
		_contacts[i].print_line();
	if (this->_nb_contact == 0)
	{
		std::cout << "No contact" << std::endl;
		return ;
	}
	while (index < 0 || index > this->_nb_contact)
	{
		std::cout << "Which contact you want to see ? ";
		std::cin >> index;
		if (std::cin.eof())
			return ;
		index--;
		if (index < 0 || index > this->_nb_contact)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "Invalid input" << std::endl;
		}
	}
	this->_contacts[index].print_all();
}