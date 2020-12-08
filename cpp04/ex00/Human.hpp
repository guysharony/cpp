/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:00:43 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 14:02:04 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_HPP
# define HUMAN_CLASS_HPP

# include "Victim.hpp"

class Human : public Victim
{
	public:
		Human(std::string const & name);
		Human(Human const & src);
		virtual ~Human();

		Human &	operator=(Human const & rhs);
		
		virtual std::string 	getName(void) const;
		virtual void 			getPolymorphed(void) const;
		
	protected:
		Human(void);
};

#endif