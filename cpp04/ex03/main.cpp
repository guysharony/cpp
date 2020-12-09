/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:25:04 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/09 15:01:31 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* moi = new Character("moi");

	std::cout << "<Moi> has Ice & Cure:" << std::endl;
	AMateria* tmp1;
	tmp1 = src->createMateria("ice");
	moi->equip(tmp1);

	AMateria* tmp2;
	tmp2 = src->createMateria("cure");
	moi->equip(tmp2);

	ICharacter* bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << std::endl;
	std::cout << "<Moi> has only Cure:" << std::endl;
	moi->unequip(0);
	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << std::endl;
	std::cout << "<Moi> doesn't have anything:" << std::endl;
	std::cout << std::endl;
	moi->unequip(0);
	moi->use(0, *bob);
	moi->use(1, *bob);

	delete bob;
	delete moi;
	delete src;
	delete tmp1;
	delete tmp2;
	return 0;
}