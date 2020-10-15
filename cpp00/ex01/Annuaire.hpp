/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annuaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:47:14 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/15 11:37:40 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_CLASS_HPP
# define ANNUAIRE_CLASS_HPP
# include "Contact.hpp"

class Annuaire
{
	public:
		Annuaire();
		~Annuaire();

		void newContact();
		void showContact();
		void search();

	private:
		int	total;
		Contact c[8];
		int _sHeader();
		void _sFooter();
};

#endif