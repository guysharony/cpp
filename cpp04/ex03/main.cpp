/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:25:04 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/09 08:47:26 by gsharony         ###   ########.fr       */
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
	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);

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
	
	return 0;
}