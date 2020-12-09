/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:54:50 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 15:16:24 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "BananaRifle.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Zombie.hpp"

int main()
{
	Character* 	moi = new Character("moi");
	
	std::cout << *moi << std::endl;

	Enemy* 		b = new RadScorpion();

	AWeapon* 	pr = new PlasmaRifle();
	AWeapon* 	pf = new PowerFist();
	AWeapon*	br = new BananaRifle();

	std::cout << std::endl;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);

	std::cout << std::endl;
	moi->equip(pf);
	std::cout << *moi;
	moi->attack(b);

	std::cout << std::endl;
	moi->equip(br);
	std::cout << *moi;
	moi->attack(b);
	
	std::cout << std::endl;
	Enemy*		z = new Zombie();
	std::cout << "A zombie? Seriously?" << std::endl;
	std::cout << "Someone killed you once... And it's gonna happend twice!" << std::endl;
	std::cout << std::endl;
	moi->equip(pf);
	std::cout << *moi;
	moi->attack(z);

	std::cout << std::endl;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(z);

	std::cout << std::endl;
	std::cout << "Oh wait! What is it?" << std::endl;
	Enemy*		s = new SuperMutant();
	std::cout << std::endl;
	moi->equip(pf);
	std::cout << *moi;
	moi->attack(s);

	delete moi;
	delete br;
	delete pr;
	delete pf;
	delete s;
	return (0);
}
