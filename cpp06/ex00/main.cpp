/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:00:45 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/09 15:19:45 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int		main(int argc, char **argv)
{	
	if (argc == 2)
	{	
		Convert		*c = new Convert;

		std::string str(argv[0]);
		c->setInput(str);

		std::cout << "[" << c->getInput() << "]" << std::endl; 
		
		delete c;
	}
	return (0);
}