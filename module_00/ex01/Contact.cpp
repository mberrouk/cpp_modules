/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:31:36 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/23 16:37:12 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
