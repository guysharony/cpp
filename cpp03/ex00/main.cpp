/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:53:47 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/03 11:31:34 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int main(void) {
	FragTrap a("Human");
	FragTrap b("Terminator");
    
	std::cout << std::endl;
    a.rangedAttack("Terminator");
	b.takeDamage(20);
	b.meleeAttack("Human");
	a.takeDamage(30);
	std::cout << std::endl;
	a.beRepaired(20);
	b.beRepaired(20);
	std::cout << std::endl;
	a.vaulthunter_dot_exe("Terminator");
	b.takeDamage(25);
	b.vaulthunter_dot_exe("Human");
	a.takeDamage(25);
	a.vaulthunter_dot_exe("Terminator");
	b.takeDamage(25);
	b.vaulthunter_dot_exe("Human");
	a.takeDamage(25);
	a.vaulthunter_dot_exe("Terminator");
	b.takeDamage(25);
	b.vaulthunter_dot_exe("Human");
	a.takeDamage(25);
	a.vaulthunter_dot_exe("Terminator");
	b.takeDamage(25);
	b.vaulthunter_dot_exe("Human");
	a.takeDamage(25);
	std::cout << std::endl;
	a.meleeAttack("Terminator");
	b.takeDamage(30);
	std::cout << std::endl;
	return (0);
}