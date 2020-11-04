/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 09:29:50 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/04 11:06:34 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

# include <iostream>
# include <string>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(
		unsigned int hitPoints,
		unsigned int maxHitPoints,
		unsigned int energyPoints,
		unsigned int level,
		std::string const name,
		unsigned int meleeAttackDamage,
		unsigned int rangedAttackDamage,
		unsigned int armorDamageReduction);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		
		ClapTrap & operator=(ClapTrap const & rhs);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	
	protected:
		unsigned int getHitPoints(void) const;
		unsigned int getMaxHitPoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getLevel(void) const;
		std::string getName(void) const;
		unsigned int getMeleeAttackDamage(void) const;
		unsigned int getRangedAttackDamage(void) const;
		unsigned int getArmorDamageReduction(void) const;

		void setHitPoints(unsigned int nbr);
		void setMaxHitPoints(unsigned int nbr);
		void setEnergyPoints(unsigned int nbr);
		void setLevel(unsigned int nbr);
		void setName(std::string const & str);
		void setMeleeAttackDamage(unsigned int nbr);
		void setRangedAttackDamage(unsigned int nbr);
		void setArmorDamageReduction(unsigned int nbr);

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