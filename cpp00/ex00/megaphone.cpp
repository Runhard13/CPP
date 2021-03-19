/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdrennan <cdrennan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:28:15 by cdrennan          #+#    #+#             */
/*   Updated: 2021/03/17 19:28:15 by cdrennan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{

	int i = 1;
	int k;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		{
		while (i < ac)
		{
			k = 0;
			while(av[i][k])
			{
				std::cout << char(toupper(av[i][k]));
				k++;
			}
			std::cout << " ";
			i++;
		}
	}
	std::cout << std::endl;
	return 0;
}
