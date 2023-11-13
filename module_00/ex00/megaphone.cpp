/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <mberrouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:24:20 by mberrouk          #+#    #+#             */
/*   Updated: 2023/11/13 15:21:29 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char *av[])
{
	std::string arg;

    if (ac > 1)
    {
        for (int i = 1; i < ac; i++)
		{
			arg = av[i];
            for (int j = 0; arg[j]; j++)
                std::cout << (char) toupper(arg[j]);
		}
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
