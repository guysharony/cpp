/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 10:59:57 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/19 08:58:34 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_CLASS_HPP
# define ANNUAIRE_CLASS_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class Annuaire {
	public:
		Annuaire(void);
		~Annuaire(void);

		bool add(void);
		bool search(void) const;

	private:
		int	_total;

		void _insert(void);
		void _tHeader(void) const;
		void _tBody(void) const;
		void _tFooter(void) const;
		void _print(std::string str) const;
		
		Contact _c[8];
};

#endif