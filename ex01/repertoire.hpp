#ifndef REPERTOIRE_HPP
#define REPERTOIRE_HPP

# include <iomanip>
# include <cstring>
# include <iostream>
# include <sstream>
# include <string>
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
	std::cout << "Tapez une chaine (ADD, SEARCH ou EXIT) : "; getline (cin, s1);
	if (s1.at(i) == 'A' && s1.at(i + 1) == 'D' s1.at(i + 2) == 'D' && s1.size == 3)
	{
		std::cout << "Entrer Prenom (first name) "; getline (cin, FirstName_);
	}
	
}

/*Contact::~Contact()
{
}
*/

#endif