/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 08:09:11 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/19 10:49:48 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_HPP
# define NINJATRAP_CLASS_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap(void);
		NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);
		
		NinjaTrap & operator=(NinjaTrap const & rhs);

		void	ninjaShoebox(NinjaTrap const & target);
		void	ninjaShoebox(ClapTrap const & target);
		void	ninjaShoebox(FragTrap const & target);
		void	ninjaShoebox(ScavTrap const & target);

		unsigned int getEnergyPoints(void) const;
		unsigned int getMaxEnergyPoints(void) const;
		unsigned int getMeleeAttackDamage(void) const;
};

#endif