/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 08:43:43 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:41:15 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_HPP
# define SORCERER_CLASS_HPP

# include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer(std::string const & name, std::string const & title);
		Sorcerer(Sorcerer const & src);
		~Sorcerer();

		Sorcerer & operator=(Sorcerer const & rhs);
		
		std::string 	getName(void) const;
		std::string 	getTitle(void) const;

		void 			polymorph(Victim const &) const;

	private:
		Sorcerer(void);
		std::string 	_name;
		std::string 	_title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif