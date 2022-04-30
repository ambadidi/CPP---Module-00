/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Repertoir.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <abadidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:52:41 by abadidi           #+#    #+#             */
/*   Updated: 2022/04/30 11:52:41 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "repertoire.hpp"

int main(void)
{
	std::string		command;
	Phonebook		contact[8];

	while (command != "EXIT")
	{
		std::cout << BOLDYELLOW << "Entrez votre commande : " << RESET;
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (1);
		}
		if (command == "ADD")
			Phonebook::addContact(contact[Phonebook::getContactNb()]);
		else if (command == "SEARCH")
			Phonebook::searchContact(contact);
		else
			std::cout << RED << "Veuillez entrer : ADD, SEARCH ou EXIT" << RESET << std::endl;
	}
	return (0);
}