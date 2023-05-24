/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:38:35 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/09 15:17:58 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {
	
	private :

		Contact	_contacts[8];
		
		int		_nb_contact;
		int		_current_contact;

	public :
	
		PhoneBook( void );
		~PhoneBook( void );
		void	add( void );
		void	search( void );
		void	print( void );
};

#endif