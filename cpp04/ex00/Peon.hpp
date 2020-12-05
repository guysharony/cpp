/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:06:07 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:41:23 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_HPP
# define PEON_CLASS_HPP

# include "Victim.hpp"

class Peon : public Victim {
	public:
		Peon(std::string const & name);
		Peon(Peon const & src);
		virtual ~Peon();

		Peon &	operator=(Peon const & rhs);
		
		virtual std::string 	getName(void) const;
		virtual void 			getPolymorphed(void) const;
		
	protected:
		Peon(void);
};

std::ostream &operator<<(std::ostream &o, Peon const &rhs);

#endif