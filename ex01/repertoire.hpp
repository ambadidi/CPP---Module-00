#ifndef REPERTOIRE_HPP
#define REPERTOIRE_HPP

# include <iomanip>
# include <cstring>
# include <iostream>
# include <sstream>
# include <string>
# include <cctype>
# define MaxContact 8
class PhoneBook
{
private:
	PhoneBook	repertoire;
	Contact		contacts[];

public:
	PhoneBook(/* args */);
	~PhoneBook();
};

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}
class Contact
{
private:
	Contact repertoire;
	enum	enum_Entree{ADD, SEARCH, EXIT};
	string	FirstName_;
	string	LastName_;
	string	NickName_;
	string	PhoneNumber_;
	string	DarkestSecret_;
public:
	void	AddContact(string FirstName_, string LastName_, string NickName_, string PhoneNumber_, string DarkestSecret_);
	void	CheckAdd(Contact repertoire);
//	~Contact();
};
void	Contact::CheckAdd(Contact repertoire)
{

}

void	Contact::AddContact(string FirstName_, string LastName_, string NickName_, string PhoneNumber_, string DarkestSecret_)
{
	string	s1;
	int		i = 0;
	bool	CheckFirstName = false;
	bool	CheckLastName = false;
	bool	CheckNickName = false;
	std::cout << "Tapez une chaine (ADD, SEARCH ou EXIT) : "; getline (cin, s1);
	if (s1.at(i) == 'A' && s1.at(i + 1) == 'D' s1.at(i + 2) == 'D' && s1.size == 3) & (i = 0)
	{
		std::cout << "Entrer Prenom (first name) "; getline (cin, FirstName_);
		while (FirstName_.size--)
		{
			while (isalpha(FirstName_[i]))
			{
				i++;
				if (FirstName_.size == 0)
					CheckFirstName = true;
			}
		}
		while (CheckFirstName == false)
		{
			std::cout << "Error: Entrer un Vrai Prenom (first name) "; getline (cin, FirstName_);
			i = 0;
			while (isalpha(FirstName_[i]))
			{
				i++;
				if (FirstName_.size == 0)
					CheckFirstName = true;
			}
		}
		i = 0;
		std::cout << "Entrer Nom (last name) "; getline (cin, LastName_);
		while (LastName_.size--)
		{
			while (isalpha(LastName_[i]))
			{
				i++;
				if (LastName_.size == 0)
					CheckLastName = true;
			}
		}
		while (CheckLastName == false)
		{
			std::cout << "Error: Entrer un Vrai Nom (last name) "; getline (cin, LastName_);
			i = 0;
			while (isalpha(LastName_[i]))
			{
				i++;
				if (LastName_.size == 0)
					CheckLastName = true;
			}
		}
	}
	i = 0;
	std::cout << "Entrer un Surnom (Nickname) "; getline (cin, NickName_);
		while (NickName_.size--)
		{
			while (isprint(NickName_[i]))
			{
				i++;
				if (NickName_.size == 0)
					CheckNickName = true;
			}
		}
		while (CheckNickName == false)
		{
			std::cout << "Entrer un Vrai Surnom (Nickname) "; getline (cin, NickName_);
			i = 0;
			while (isprint(NickName_[i]))
			{
				i++;
				if (NickName_.size == 0)
					CheckNickName = true;
			}
		}
}

/*Contact::~Contact()
{
}
*/

#endif