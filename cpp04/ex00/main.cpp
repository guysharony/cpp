/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:17:32 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/09 11:32:32 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Human.hpp"
#include "Peon.hpp"

int	main(void)
{
	Sorcerer 	robert("Robert", "the Magnificent");
	Sorcerer 	edouard("Edouard", "the Powerfull");
	Victim 		jim("Jimmy");
	
	Human 		bob("Bob");
	Human		homme("Homme");

	Peon 		joe("Joe");

	std::cout << std::endl;
	std::cout << robert << edouard << jim << joe << homme << bob;

	robert = edouard;
	bob = homme;

	std::cout << std::endl;
	std::cout << robert << edouard << jim << joe << homme << bob;

	std::cout << std::endl;
	jim.getPolymorphed();
	joe.getPolymorphed();
	bob.getPolymorphed();
	homme.getPolymorphed();

	std::cout << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bob);
	robert.polymorph(homme);

	return (0);
}