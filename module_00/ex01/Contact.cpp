/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:31:36 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/13 15:09:05 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string Contact::get_field(int index)
{
	switch (index) {
	case LASTN:
		return lastName;
		break;
	case FIRSTN:
		return firstName;
		break;
	case NICKN:
		return nickName;
		break;
	case NUM:
		return number;
		break;
	case DARKSCR:
		return darkSecret;
		break;
	default:
		break;
	}
	return ("");
}

void	Contact::print_info(void)
{
	str	fields[5] = {
		"first name: ",
		"last name: ",
		"nickname: ",
		"phone number: ",
		"darkest secret: "
	};

	std::cout << fields[0] << firstName << std::endl;
	std::cout << fields[1] << lastName << std::endl;
	std::cout << fields[2] << nickName << std::endl;
	std::cout << fields[3] << number << std::endl;
	std::cout << fields[4] << darkSecret << std::endl;
}

void Contact::set_contact(str args[])
{
	firstName = args[FIRSTN];
	lastName = args[LASTN];
	nickName = args[NICKN];
	number = args[NUM];
	darkSecret = args[DARKSCR];
}