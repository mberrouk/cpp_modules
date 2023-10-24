#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

enum Field {
	LASTN,
	FIRSTN,
	NICKN,
	NUM,
	DARKSCR
};

class PhoneBook {
	Contact list[8];
	int len;
	public:
		PhoneBook() : list(), len (0) {};
		int		read_command (std::string);
		void	get_data();
		void	add(str, str, str, str, str);
		void	search();
};

#endif // !PHONEBOOK_H
