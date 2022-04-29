/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <abadidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 16:55:22 by abadidi           #+#    #+#             */
/*   Updated: 2022/04/29 16:03:14 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_HPP
# define MEGAPHONE_HPP
# include <iostream>
# include <cstddef>
# include <cstring>
# include <cctype>
# include <stdexcept>
//SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOOPENFILEERRORBOX);
class Megaphone
{
public:
	Megaphone(int argc, char **argv);
protected:
	int argc;
	char **argv;
};

Megaphone::Megaphone(int argc, char **argv)
{
	if (argc == 1){
		SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOOPENFILEERRORBOX);
		throw std::runtime_error("* LOUD AND UNBEARABLE FEEDBACK NOISE *" );
	}	
	for(int i = 1; i <= argc ; i++)
	{
		char  **tmp = new(std::nothrow) char *;
		if (argc >= 2)
		{
			tmp = &argv[i]; //std::cout << " ";
			argv[i] = argv[i + 1];
			argv[i + 1] = *tmp; 
		}
		
		for(int j = 0; j < (int)strlen(argv[i]); j++)
			std::cout << (char)toupper(argv[i][j]);
		delete tmp;	
	}
	std::cout << std::endl;
}

#endif