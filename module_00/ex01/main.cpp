/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:31:25 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/24 18:55:11 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	str s;
	PhoneBook book;

	while (true)
	{
		std::cout << "<*> Enter command |ADD|SEARCH|EXIT| ~~~> ";
		if (!std::getline(std::cin, s))
			ft_exit();
		switch (book.read_command(s))
		{
			case 1:
				book.get_data();
				break;
			case 2:
				book.search();
				std::cin.clear();
				break;
			case 3:
				std::exit(0);
				break;
			default:
				std::cout << "Invalid choice. Please try again..." << std::endl;
				break;
		}
		std::cin.clear();
		std::cout << std::endl;
	}
	return (0);
}
