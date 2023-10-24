/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:34:28 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/24 18:57:51 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include "PhoneBook.hpp"
#include <iomanip>
#include <locale>
#include <string>

#define FIELD_WIDTH 10

bool	isNonPrint(char c);
void	print_head_rows(void);
void	ft_exit(void);
str		format_str(str s);

#endif // !MAIN_HPP
