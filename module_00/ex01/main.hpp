/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:34:28 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/13 15:11:00 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

enum Field {
	FIRSTN,
	LASTN,
	NICKN,
	NUM,
	DARKSCR
};

bool is_non_print(char c);

#endif // !MAIN_HPP
