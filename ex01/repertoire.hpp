/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repertoire.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <abadidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:52:53 by abadidi           #+#    #+#             */
/*   Updated: 2022/04/30 11:52:53 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPERTOIRE_HPP
#define REPERTOIRE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

# define RESET			"\033[0m"
# define BLACK			"\033[30m"				/* Black */
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */
# define WHITE			"\033[37m"				/* White */
# define BOLDBLACK		"\033[1m\033[30m"		/* Bold Black */
# define BOLDRED		"\033[1m\033[31m"		/* Bold Red */
# define BOLDGREEN		"\033[1m\033[32m"		/* Bold Green */
# define BOLDYELLOW		"\033[1m\033[33m"		/* Bold Yellow */
# define BOLDBLUE		"\033[1m\033[34m"		/* Bold Blue */
# define BOLDMAGENTA	"\033[1m\033[35m"		/* Bold Magenta */
# define BOLDCYAN		"\033[1m\033[36m"		/* Bold Cyan */
# define BOLDWHITE		"\033[1m\033[37m"		/* Bold White */

class Phonebook {

private:

	std::string 	FirstName_;
	std::string 	LastName_;
	std::string 	Nickname_;
	std::string 	PhoneNumber_;
	std::string 	DarkestSecret_;

	static int		ContactNb_;
	void			PrintContact_(Phonebook contact);
	void			RequestInfo_(std::string prompt, std::string &contactStr);
	void			TruncateInfo_(std::string string);
	int				CheckEmptyInfo_(Phonebook contact);
	static int		EmptyPhonebook_(Phonebook *contact);
	 static int  			Exist();

		static int		added;


public:
	static void		addContact(Phonebook &contact);
	static void		searchContact(Phonebook *contact);
	static int		getContactNb(void);

	Phonebook(void);
	~Phonebook(void);
};

#endif