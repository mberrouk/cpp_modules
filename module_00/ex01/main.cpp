/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:31:25 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/21 18:21:26 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::string s;
	PhoneBook book;

	while (true)
	{
		std::cout << "*> Enter command 'ADD, SEARCH, EXIT' ~~~> ";
		if (!std::getline(std::cin >> std::ws, s))
		{
			std::cout << "\nTerminate the execution..." << std::endl;
			std::exit(1);
		}
		switch (book.read_command(s))
		{
			case 1:
				std::cout << "1" << std::endl;
				break;
			case 2:
				std::cout << "2" << std::endl;
				break;
			case 3:
				std::cout << "3" << std::endl;
				break;
			default:
				std::cout << "Invalid choice. Please try again..." << std::endl;
				break;
		}
		std::cout << std::endl;
	}
	return (0);
}
