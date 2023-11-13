/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:56:02 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/13 15:10:02 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

typedef std::string str;

class Contact {
	str lastName;
	str firstName;
	str nickName;
	str number;
	str darkSecret;

	public:
		str get_field(int);
		void print_info(void);
		void set_contact(str[]);
};

#endif // !CONTACT_HPP
