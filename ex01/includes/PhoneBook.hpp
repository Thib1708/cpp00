/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:38:35 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/31 11:09:47 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private :
			Contact	_contacts[8];
			int		_nb_contact;
			int		_current_contact;
	public :
			/* Constructors & Destructors */
			PhoneBook( void );
			~PhoneBook( void );
			/* Methods */
			void	add( void );
			void	search( void );
			void	print( void );
};

#endif