/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <abadidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:55:22 by abadidi           #+#    #+#             */
/*   Updated: 2022/04/26 20:28:30 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
# define MEGAPHONE_HPP
# include <iostream>
# include <cstring>
class megaphone
{
public:
	void	phone(int argc, char **argv);
};

void	megaphone::phone(int argc, char **argv)
{
	if (argc == 1)	
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(int i = 1; i < argc ; i++)
		for(int j = 0; j < (int)strlen(argv[i]); j++)
			std::cout << (char)toupper(argv[i][j]);		
	std::cout << std::endl;
}

#endif