/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:53:47 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/24 10:51:48 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

int main(void) {
	FragTrap a("Human");
	ScavTrap b("Terminator");
    
	std::cout << std::endl;
    a.rangedAttack("Terminator");
	b.takeDamage(20);
	b.challengeNewcomer();
	std::cout << std::endl;
	a.beRepaired(20);
	b.beRepaired(20);
	std::cout << std::endl;
	a.vaulthunter_dot_exe("Terminator");
	b.takeDamage(25);
	b.meleeAttack("Human");
	a.takeDamage(20);
	a.vaulthunter_dot_exe("Terminator");
	b.takeDamage(25);
	b.rangedAttack("Human");
	a.takeDamage(15);
	a.vaulthunter_dot_exe("Terminator");
	b.takeDamage(25);
	b.rangedAttack("Human");
	a.takeDamage(15);
	a.vaulthunter_dot_exe("Terminator");
	b.takeDamage(25);
	b.meleeAttack("Human");
	a.takeDamage(20);
	std::cout << std::endl;
	a.meleeAttack("Terminator");
	b.takeDamage(30);
	std::cout << std::endl;
	return (0);
}