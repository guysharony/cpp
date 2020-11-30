/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:06:07 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/30 09:14:48 by gsharony         ###   ########.fr       */
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
		~Victim(void);

		Victim & operator=(Victim const & rhs);
		
		std::string getName(void) const;

		void getPolymorphed(void) const;

	private:
		Victim(void);
		std::string _name;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif