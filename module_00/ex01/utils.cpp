/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:31:46 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/24 18:57:18 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool	isNonPrint(char c) {
	return (!isprint(c));
}

void	ft_exit(void) {
	std::cout << "\nTerminate the execution..." << std::endl;
	std::exit(1);
}

str		format_str(str s) {
	if (s.length() > FIELD_WIDTH)
		return (s.substr(0, FIELD_WIDTH - 1) + ".");
	return (str(FIELD_WIDTH - s.length(), ' ') + s);
}

void	print_head_rows(void) {
	std::cout << std::setfill('-') << std::setw(46) << "\n";
	std::cout << std::setfill(' ') << std::left\
		<< '|' << std::setw(FIELD_WIDTH) << "Index" << '|'\
		<< std::setw(FIELD_WIDTH) << "First Name"\
		<< '|' << std::setw(FIELD_WIDTH) << "Last Name"\
		<< '|' << std::setw(FIELD_WIDTH) << "Nick Name" << '|';
	std::cout << std::setfill('-') << std::setw(46) << "\n"<< "\n";
}
