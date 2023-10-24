/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:31:36 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/24 20:05:51 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	Contact::print_info(void) {
	str	fields[5] = {
		"first name: ",
		"last name: ",
		"nickname: ",
		"phone number: ",
		"darkest secret: "
	};
	
	std::cout << fields[0] << l_name << "\n";
	std::cout << fields[1] << f_name << "\n";
	std::cout << fields[2] << nickname << "\n";
	std::cout << fields[3] << number << "\n";
	std::cout << fields[4] << darksecret << "\n";
}

void	Contact::set_contact(str l, str f, str n, str num, str d) {
	l_name = l;
	f_name = f;
	nickname = n;
	number = num;
	darksecret = d;
}

str		Contact::get_field(int index) {
	switch (index) {
		case LASTN:
			return l_name;
			break;
		case FIRSTN:
			return f_name;
			break;
		case NICKN:
			return nickname;
			break;
		case NUM:
			return number;
			break;
		case DARKSCR:
			return darksecret;
			break;
		default:
			break;
	}
	return ("");
}
