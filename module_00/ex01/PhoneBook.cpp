/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/FIELD_WIDTH/21 18:00:26 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/24 20:10:42 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


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
		if ( arg[index].find_first_not_of(" \t\n\v\f\r") == arg[index].npos \
				|| arg[index].empty()) {
			std::cout << "Please double-check your input!\n";
			continue;
		}
		else if ((index == LASTN || index == FIRSTN || index == NICKN || index == DARKSCR)
				&& any_of(arg[index].begin(), arg[index].end(), isNonPrint)) {
			std::cout << "Invalid character detected in the input string!" << std::endl;
			continue;
		}
		else if (index == NUM && ((arg[index].length() < 10 || arg[index].length() > 15) \
				|| arg[index].find_first_not_of("0123456789") != arg[index].npos)) {
			std::cout << "Ensure that the phone number contains at least";
			std::cout << " 10 digits but no more than 15 digits!\n";	
			continue;
		}
		index++;
	}
	add(arg[LASTN], arg[FIRSTN], arg[NICKN], arg[NUM], arg[DARKSCR]);
}

void	PhoneBook::add(str l, str f, str n, str num, str d) {
	if (len == 8)
		len = 7;
	list[len].set_contact(l, f, n, num, d);
	len++;
}

void	PhoneBook::search() {
	int i;
	str choise;
	
	print_head_rows();
	for (i = 0; i < 8; i++) {
		std::cout << std::setfill(' ') << std::right << '|' \
			<< std::setw(FIELD_WIDTH) << i << '|' << std::setw(FIELD_WIDTH)
			<< format_str(list[i].get_field(FIRSTN)) << '|' \
			<< std::setw(FIELD_WIDTH) << format_str(list[i].get_field(LASTN)) << '|' \
			<< std::setw(FIELD_WIDTH) << format_str(list[i].get_field(NICKN)) << '|' \
			<< "\n";
	}
	std::cout << std::setfill('-') << std::setw(46) << "\n";
	std::cout << "↪ Entre index of contact 0-7: ";
	if (!std::getline(std::cin, choise))
		ft_exit();		
	else if (choise.length() > 1 || !choise[0]
			|| choise[0] < '0' || choise[0] > '7')
		std::cout << "Is not a valid choise!\n";
	else
		list[(int)choise[0] - 48].print_info();
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
