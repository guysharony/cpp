/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:06:07 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/30 09:36:30 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim {
	public:
		Peon(std::string const & name);
		Peon(Peon const & src);
		virtual ~Peon(void);

		Peon & operator=(Peon const & rhs);
		
		virtual std::string getName(void) const;
		virtual void 		getPolymorphed(void) const;
		
	protected:
		Peon(void);
};

std::ostream &operator<<(std::ostream &o, Peon const &rhs);

#endif