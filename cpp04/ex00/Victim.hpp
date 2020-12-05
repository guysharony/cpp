/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:06:07 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:41:19 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_HPP
# define VICTIM_CLASS_HPP

# include <iostream>
# include <string>

class Victim {
	public:
		Victim(std::string const & name);
		Victim(Victim const & src);
		virtual ~Victim();

		Victim & operator=(Victim const & rhs);
		
		virtual std::string 	getName(void) const;
		virtual void 			getPolymorphed(void) const;

	protected:
		Victim(void);
		std::string 	_name;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif