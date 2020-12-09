/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:11:45 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/09 13:27:47 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int		main(void)
{
	ISpaceMarine* 	bob = new TacticalMarine;
	ISpaceMarine* 	jim = new AssaultTerminator;

	ISquad* 		vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* 	cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << std::endl;
	ISpaceMarine* 	bob2 = new TacticalMarine;
	ISpaceMarine* 	jim2 = new AssaultTerminator;

	Squad			vlc1;
	Squad			vlc2;
	
	std::cout << std::endl;
	std::cout << "[vlc1 & vlc2 are empty]" << std::endl;
	std::cout << "-- vlc1 size: " << vlc1.getCount() << " --" << std::endl;
	std::cout << "-- vlc2 size: " << vlc2.getCount() << " --" << std::endl;

	vlc1.push(bob2);

	std::cout << std::endl;
	std::cout << "[Adding bob2 to vlc1]" << std::endl;
	std::cout << "-- vlc1 size: " << vlc1.getCount() << " --" << std::endl;
	std::cout << "-- vlc2 size: " << vlc2.getCount() << " --" << std::endl;

	vlc2 = vlc1;

	std::cout << std::endl;
	std::cout << "[Deep copy vlc1 to vlc2]" << std::endl;
	std::cout << "-- vlc1 size: " << vlc1.getCount() << " --" << std::endl;
	std::cout << "-- vlc2 size: " << vlc2.getCount() << " --" << std::endl;

	vlc2.push(jim2);

	std::cout << std::endl;
	std::cout << "[Adding jim2 to vlc2]" << std::endl;
	std::cout << "-- vlc1 size: " << vlc1.getCount() << " --" << std::endl;
	std::cout << "-- vlc2 size: " << vlc2.getCount() << " --" << std::endl;
	
	std::cout << std::endl;
	std::cout << "[Death of both vlc1 and vlc2]" << std::endl;
	return (0);
}