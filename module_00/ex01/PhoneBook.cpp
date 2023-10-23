/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/FIELD_WIDTH/21 18:00:26 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/23 20:32:59 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::get_data() {
	int	index = 0;
	str	arg[5], fields[5] = {
		"first name: ",
		"last name: ",
		"nickname: ",
		"phone number: ",
		"darkest secret: "
	};

	while (index < 5)
	{
		std::cout << "Entre " << fields[index];
		if (!std::getline(std::cin, arg[index]))
				std::exit(1);
		if (arg[index].empty() || arg[index].find_first_not_of(" \t\n\v\f\r") == arg[index].npos) {
			std::cout << "Please verify that you have entered the correct information\n";
			continue;
		}
		else if (index == NUM && ((arg[index].length() < 10 || arg[index].length() > 15) \
				|| arg[index].find_first_not_of("0123456789") != arg[index].npos)) {
			std::cout << "Phone number must consist of a minimum of 10 digits and a maximum of 15 digits\n";	
			continue;
		}
		index++;
	}
	add(arg[0], arg[1], arg[2], arg[3], arg[4]);
}

void	PhoneBook::add(str l, str f, str n, str num, str d) {
	if (len == 8)
		len = 7;
	list[len].set_contact(l, f, n, num, d);
	len++;
}

str		format_str(str s) {
	if (s.length() > FIELD_WIDTH)
		return (s.substr(0, FIELD_WIDTH - 1) + ".");
	return (str(FIELD_WIDTH - s.length(), ' ') + s);
}

void	PhoneBook::search() {
	int i;
	char choise;
	
	std::cout << std::setfill('-') << std::setw(46) << "\n";
	std::cout << std::setfill(' ') << std::left\
		<< '|' << std::setw(FIELD_WIDTH) << "Index" << '|'\
		<< std::setw(FIELD_WIDTH) << "First Name"\
		<< '|' << std::setw(FIELD_WIDTH) << "Last Name"\
		<< '|' << std::setw(FIELD_WIDTH) << "Nick Name" << '|';
	std::cout << std::setfill('-') << std::setw(46) << "\n"<< "\n";
		
	for (i = 0; i < 8; i++) {
		std::cout << std::setfill(' ') << std::right << '|' \
			<< std::setw(FIELD_WIDTH) << i << '|' << std::setw(FIELD_WIDTH)
			<< format_str(list[i].get_field(FIRSTN)) << '|' \
			<< std::setw(FIELD_WIDTH) << format_str(list[i].get_field(LASTN)) << '|' \
			<< std::setw(FIELD_WIDTH) << format_str(list[i].get_field(NICKN)) << '|' \
		<< "\n";
		//	<< std::setw(FIELD_WIDTH) \
		//<< "\n";
	}
	std::cout << std::setfill('-') << std::setw(46) << "\n";
	std::cout << "=-=> Entre index of contact 0-7: ";
	std::cin >> choise;
	switch ((int) (choise - 48)) {
		case 0:
			std::cout << "i am 0";
			break;
		case 1:
			std::cout << "i am 1";
			break;
		default:
			std::cout << "ERROR " << choise - 48;
			break;
	}
}

int		PhoneBook::read_command(std::string s) {
	if (s == "ADD")
		return (1);
	else if (s == "SEARCH")
		return (2);
	else if (s == "EXIT")
		return (3);
	return (0);
}
