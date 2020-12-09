/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:00:45 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/09 15:28:37 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int argc, char **argv)
{	
	if (argc == 2)
	{	
		std::string 	str(argv[1]);
		Convert			c(str);

		std::cout << "[" << c.getInput() << "]" << std::endl; 
	}
	return (0);
}