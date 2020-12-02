/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 15:18:02 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/02 15:28:35 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_CLASS_CPP
# define ISQUAD_CLASS_CPP

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}

		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		
		virtual int push(ISpaceMarine*) = 0;
};

#endif