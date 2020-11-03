/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:59:53 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/03 16:05:04 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

# include <iostream>
# include <string>

class ScravTrap {
	public:
		ScravTrap(void);
		ScravTrap(std::string const name);
		ScravTrap(ScravTrap const & src);
		~ScravTrap(void);
		
		ScravTrap & operator=(ScravTrap const & rhs);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
	private:
		unsigned int _hitPoints;
		unsigned int _maxHitPoints;
		unsigned int _energyPoints;
		unsigned int _level;
		std::string _name;
		unsigned int _meleeAttackDamage;
		unsigned int _rangedAttackDamage;
		unsigned int _armorDamageReduction;

};

#endif