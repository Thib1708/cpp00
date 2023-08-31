/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:44:48 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/08/31 08:49:32 by tgiraudo         ###   ########.fr       */
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
	std::cout << std::endl << "------------------ Contact ------------------" << std::endl;
	while (++i < this->_nb_contact)
	{
		_contacts[i].print_line();
		if (i + 1 == this->_nb_contact)
			std::cout << "---------------------------------------------" << std::endl;
		else
			std::cout << "|----------+----------+----------+----------|" << std::endl;
	}
	if (this->_nb_contact == 0)
	{
		std::cout << "No contact" << std::endl;
		return ;
	}
	std::cout << std::endl << "Which contact you want to see ? ";
	std::cin >> index;
	if (std::cin.eof())
		return ;
	index--;
	if (index < 0 || index > this->_nb_contact)
	{
		std::cin.clear();
		std::cin.ignore(2147483647, '\n');
		std::cout << "Invalid input" << std::endl;
	}
	else
		this->_contacts[index].print_all();
}