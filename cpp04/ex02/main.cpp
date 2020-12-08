/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:11:45 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 15:35:45 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int	main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << std::endl;
	TacticalMarine*	roger = new TacticalMarine();
	ISpaceMarine*	human = new TacticalMarine(*roger);

	ISquad* 		vlc2 = new Squad;
	vlc2->push(human);

	std::cout << std::endl;
	ISpaceMarine* cur2 = vlc2->getUnit(0);
	cur2->battleCry();
	std::cout << std::endl;
	delete roger;
	
	delete vlc2;
	return (0);
}