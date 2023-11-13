/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:15:59 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/13 15:11:27 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "main.hpp"

PhoneBook::PhoneBook()
{
	len = 0;
}

int PhoneBook::choise_option(str arg)
{
	if (arg == "ADD")
		return (1);
	else if (arg == "SEARCH")
		return (2);
	else if (arg == "EXIT")
		return (3);
	return (0);
}

std::string PhoneBook::str_formatting(std::string s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (std::string(10 - s.length(), ' ') + s);
}

void PhoneBook::draw_tab()
{
	std::cout << std::setfill('-') << std::setw(46) << '\n';
	std::cout << std::setfill(' ') << std::left << '|' << std::setw(10)
		<< "Index" << '|' << std::setw(10) << "First Name" << '|'
		<< std::setw(10) << "Last Name" << '|' << std::setw(10)
		<< "Nick Name" << '|';
	std::cout << std::setfill('-') << std::setw(46) << '\n';
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setfill(' ') << std::right << '|'
			<< std::setw(10) << i << '|' << std::setw(10)
			<< str_formatting(contacts[i].get_field(FIRSTN)) << '|'
			<< std::setw(10) << str_formatting(contacts[i].get_field(LASTN)) << '|'
			<< std::setw(10) << str_formatting(contacts[i].get_field(NICKN)) << '|';
		std::cout << std::endl;
	}
	std::cout << std::setfill('-') << std::setw(46) << '\n';
}

void PhoneBook::search()
{
	str choise;

	draw_tab();
	std::cout << "↪ Entre index of contact 0-7: ";
	if (!std::getline(std::cin, choise))
		std::exit(1);
	else if (choise.length() > 1 || !choise[0]
			|| choise[0] < '0' || choise[0] > '7')
		std::cout << "Is not a valid choise!\n";
	else
		contacts[(int)choise[0] - 48].print_info();
}

void PhoneBook::get_and_add_data()
{
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
		std::cout << "\nEntre " << fields[index];
		if (!std::getline(std::cin, arg[index]))
			std::exit(1);
		if ( arg[index].find_first_not_of(" \t\n\v\f\r") == arg[index].npos \
				|| arg[index].empty()) {
			std::cout << "Please double-check your input!\n";
			continue;
		}
		else if ((index == LASTN || index == FIRSTN || index == NICKN || index == DARKSCR)
				&& any_of(arg[index].begin(), arg[index].end(), is_non_print)) {
			std::cout << "Invalid character detected in the input string!" << std::endl;
			continue;
		}
		else if (index == NUM && ((arg[index].length() < 2 || arg[index].length() > 15) \
					|| arg[index].find_first_not_of("0123456789") != arg[index].npos)) {
			std::cout << "Ensure that the phone number contains at least";
			std::cout << " 2 digits but no more than 15 digits!\n";	
			continue;
		}
		index++;
	}
	add(arg);
}

void PhoneBook::add(str arg[])
{
	if (len == 8)
		len = 0;
	contacts[len].set_contact(arg);
	len += 1;
}
