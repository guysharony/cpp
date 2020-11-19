/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:15:20 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/13 08:48:24 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_CLASS_HPP
# define SUPERTRAP_CLASS_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap(void);
		SuperTrap(std::string const name);
		SuperTrap(SuperTrap const & src);
		~SuperTrap(void);
		
		SuperTrap & operator=(SuperTrap const & rhs);
};

#endif