/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abadidi <abadidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 11:52:26 by abadidi           #+#    #+#             */
/*   Updated: 2022/04/30 11:52:26 by abadidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "repertoire.hpp"

int Phonebook::ContactNb_ = 0;

Phonebook::Phonebook(void)
{
	FirstName_ = "";
	LastName_ = "";
	Nickname_ = "";
	PhoneNumber_ = "";
	DarkestSecret_ = "";

	return;
}

Phonebook::~Phonebook(void)
{
	return;
}

int Phonebook::getContactNb(void)
{
	return Phonebook::ContactNb_;
}

void Phonebook::addContact(Phonebook &contact)
{
	if (Phonebook::ContactNb_ >= 8)
	{
		std::cout << RED << "Le répertoire est plein. Aucun nouveau contact ne peut être ajouté. " << std::endl << RESET;
		return;
	}
	Phonebook::ContactNb_ += 1;
	std::cout << "Vous ajoutez un contact d'index n°. " << Phonebook::ContactNb_ << std::endl;
	contact.RequestInfo_("FIRST NAME", contact.FirstName_);
	contact.RequestInfo_("LAST NAME", contact.LastName_);
	contact.RequestInfo_("NICKNAME", contact.Nickname_);
	contact.RequestInfo_("Numero de Tel", contact.PhoneNumber_);
	contact.RequestInfo_("plus lourd secret", contact.DarkestSecret_);

	return;
}

void Phonebook::searchContact(Phonebook *contact)
{
	int			i = 0;
	std::string	index = "";

	if (Phonebook::EmptyPhonebook_(contact) == -1)
		return;
	std::cout << BLUE << "     index|first name| last name|  nickname" << RESET << std::endl;
	while (i < Phonebook::getContactNb())
	{
		if (contact[i].CheckEmptyInfo_(contact[i]))
		{
			std::cout << BLUE << "         " << i + 1 << "|";
			contact[i].TruncateInfo_(contact[i].FirstName_);
			std::cout << "|";
			contact[i].TruncateInfo_(contact[i].LastName_);
			std::cout << "|";
			contact[i].TruncateInfo_(contact[i].Nickname_);
			std::cout << RESET << std::endl;
		}
		i++;
	}
	std::cout << "Saisissez l'index souhaité : ";
	std::getline(std::cin, index);
	if (index.empty())
		std::cout << RED << "Veuillez recommencer la RECHERCHE et entrer un numéro d'index valide. " << std::endl << RESET;
	else
	{
		i = std::atoi(index.c_str());
		if (i > 0 && i <= Phonebook::getContactNb() && contact[i - 1].CheckEmptyInfo_(contact[i - 1]) != 0)
		{
			std::cout << BOLDBLUE << "DETAIL DU CONTACT" << RESET << std::endl;
			contact[i - 1].PrintContact_(contact[i - 1]);
		}
		else
			std::cout << RED << "Veuillez recommencer la RECHERCHE et entrer un numéro d'index valide. " << std::endl << RESET;
	}
	return;
}

void Phonebook::TruncateInfo_(std::string string)
{
	int	spaceNb = 10 - string.length();

	while (spaceNb > 0)
	{
		std::cout << " ";
		spaceNb--;
	}
	if (string.length() <= 10)
		std::cout << string;
	else
	{
		string.resize(9);
		std::cout << string << ".";
	}
	return;
}

void Phonebook::PrintContact_(Phonebook contact)
{
	std::cout << BLUE << "FIRST NAME      : <" << contact.FirstName_ <<">" << RESET << std::endl;
	std::cout << BLUE << "LAST NAME       : <" << contact.LastName_  <<">" << RESET << std::endl;
	std::cout << BLUE << "NICKNAME        : <" << contact.Nickname_ <<">" << RESET << std::endl;
	std::cout << BLUE << "Numero de Tel   : <" << contact.PhoneNumber_ <<">" << RESET << std::endl;
	std::cout << BLUE << "DARKEST SECRET  : <" << contact.DarkestSecret_ <<">" << RESET << std::endl;
 
 	return;
}

void Phonebook::RequestInfo_(std::string prompt, std::string &contactStr)
{
	std::cout << BLUE << "Entrer votre " << BOLDBLUE << prompt << ": ";
	std::getline(std::cin, contactStr);
	std::cout << RESET << "Le " << prompt << " que vous avez entre est <" << BOLDBLUE << contactStr << RESET <<">" << std::endl;
	return;
}

int Phonebook::EmptyPhonebook_(Phonebook *contact)
{
	int	i = 0;
	int	emptyContact = 0;

	if (Phonebook::getContactNb() == 0)
	{
		std::cout << RED << "Aucun contact dans le répertoire. Utilisez ADD pour ajouter un contact en premier." << std::endl << RESET;
		return (-1);
	}
	while (i < Phonebook::getContactNb())
	{
		if (contact[i].CheckEmptyInfo_(contact[i]))
			emptyContact = 1;
		i++;
	}
	if (!emptyContact)
	{
		std::cout << RED << "Aucun contact non vide dans le répertoire. Utilisez ADD pour ajouter d'abord un contact valide." << std::endl << RESET;
		return (-1);
	}
	return (0);
}

int Phonebook::CheckEmptyInfo_(Phonebook contact)
{
	if (contact.FirstName_.empty() && contact.LastName_.empty() \
	&& contact.Nickname_.empty() 
	&& contact.PhoneNumber_.empty() 
	&& contact.DarkestSecret_.empty())
		return (0);
	return (1);
}