/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberrouk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:24:20 by mberrouk          #+#    #+#             */
/*   Updated: 2023/10/21 14:13:04 by mberrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
    int i;
    int j;
 
    if (ac > 1)
    {
        for (i = 1; i < ac; i++)
            for (j = 0; av[i][j]; j++)
                std::cout << (char) toupper(av[i][j]);
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
