/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:56:02 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/24 19:58:25 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

typedef std::string str;

class Contact{
	str l_name;
	str f_name;
	str nickname;
	str number;
	str darksecret;
	public:
		void	set_contact(str, str, str, str, str);
		str		get_field(int);
		void	print_info(void);
};

#endif // !CONTACT_HPP
