/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:14:05 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/30 11:40:02 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {

	private :
	
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		int			_index;
		
	public :
	
		Contact( void );
		~Contact( void );
		
		void	print_all( void );
		void	print_line( void );
		void	print_ten( std::string str );
		void	new_contact( int index );
		std::string	get_info( std::string str );
};

#endif