/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:31:46 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/13 15:12:35 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool is_non_print(char c)
{
	return (!isprint(c));
}
