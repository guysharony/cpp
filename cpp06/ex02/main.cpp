/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 09:12:56 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/14 16:37:28 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int		main(void)
{
	srand(time(NULL));

	int		i = rand() % 3;
	Base	*base;
	
	std::cout << "Creating Base type ";
	if (i == 0) {
		base = new A();
		std::cout << "A" << std::endl;
	} else if (i == 1) {
		base = new B();
		std::cout << "B" << std::endl;
	} else if (i == 2) {
		base = new C();
		std::cout << "C" << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Identify from pointer   - ";
	identify_from_pointer(base);
	std::cout << std::endl;
	std::cout << "Identify from reference - ";
	identify_from_reference(*base);
	std::cout << std::endl;
	delete base;
	return (0);
}