/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:17:11 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/13 15:11:57 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	Contact contacts[8];
	unsigned int len;

	public:
		PhoneBook();
		int	choise_option(str);
		void draw_tab(void);
		void search(void);
		str str_formatting(str);
		void add(str[]);
		void get_and_add_data();
};

#endif // !PHONEBOOK_HPP
