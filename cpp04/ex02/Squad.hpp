/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:11:45 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:43:54 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_CLASS_HPP
# define SQUAD_CLASS_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	public:
		Squad(void);
		Squad(Squad const & src);
		virtual ~Squad();

		Squad 					&operator=(Squad const & src);
	
		virtual int 			getCount() const;
		virtual ISpaceMarine* 	getUnit(int) const;
		
		virtual int 			push(ISpaceMarine*);

	protected:
		int						_count;
		ISpaceMarine			**_unit;

	private:
		void 					_delUnits(void);
		void					_setUnits(Squad const &src);
		
		int						_includes(ISpaceMarine *unit);
};

#endif