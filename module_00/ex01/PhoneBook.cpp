/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:00:26 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/21 18:04:05 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	PhoneBook::read_command(std::string s)
{
	if (s == "ADD")
		return (1); 
	else if (s == "SEARCH")
		return (2);
	else if (s == "EXIT")
		return (3);
	return (0);
}
