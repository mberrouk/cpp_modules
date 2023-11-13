/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:31:25 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/13 15:14:39 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main ()
{
	std::string arg;
	PhoneBook book;

	while (true)
	{
		std::cout << "\n<*> Enter command |ADD|SEARCH|EXIT| ~~~> ";
		if (!std::getline(std::cin, arg))
			std::exit(1);
		switch (book.choise_option(arg))
		{
			case 1:
				book.get_and_add_data();
				break;
			case 2:
				book.search();
				break;
			case 3:
				std::exit(0);
			default:
				std::cout << "Invalid choice. Please try again..." << std::endl;
				break;
		}
	}
	return (0);
}
