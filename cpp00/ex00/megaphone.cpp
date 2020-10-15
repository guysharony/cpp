/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:47:51 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/15 11:34:23 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(int argc, char **argv)
{
	int		i;
	size_t	j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			std::string str(argv[i]);
			while (j < str.length())
			{
				std::cout << (char)std::toupper(str[j]);
				j++;
			}
			i++;
		}
	} else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
  	return 0;
}