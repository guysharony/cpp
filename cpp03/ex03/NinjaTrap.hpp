/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 08:09:11 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/05 08:20:27 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_HPP
# define NINJATRAP_CLASS_HPP

# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap {
	public:
		NinjaTrap(void);
		NinjaTrap(std::string const name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);
		
		NinjaTrap & operator=(NinjaTrap const & rhs);
};

#endif