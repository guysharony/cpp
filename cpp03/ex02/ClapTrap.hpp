/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 09:29:50 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/24 11:09:44 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>
# include <cstdlib>
# include <string>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		
		ClapTrap & operator=(ClapTrap const & rhs);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		unsigned int getHitPoints(void) const;
		unsigned int getMaxHitPoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getMaxEnergyPoints(void) const;
		unsigned int getLevel(void) const;
		std::string getName(void) const;
		unsigned int getMeleeAttackDamage(void) const;
		unsigned int getRangedAttackDamage(void) const;
		unsigned int getArmorDamageReduction(void) const;

	protected:
		unsigned int _hitPoints;
		unsigned int _maxHitPoints;
		unsigned int _energyPoints;
		unsigned int _maxEnergyPoints;
		unsigned int _level;
		std::string _name;
		unsigned int _meleeAttackDamage;
		unsigned int _rangedAttackDamage;
		unsigned int _armorDamageReduction;
};

#endif