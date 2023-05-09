/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:57:36 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/05/09 11:05:26 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int 	i;
	char	c;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (argv[++i])
	{
		while (*argv[i])
		{
			std::cout << (char)std::toupper(*argv[i]);
			argv[i]++;
		}
	}
	std::cout << std::endl;
	return (0);
}