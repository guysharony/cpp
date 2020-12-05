/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:24:38 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:50:35 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

class AMateria;

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{
	private:
		AMateria(void);
		std::string		_type;
		unsigned int 	_xp;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual ~AMateria();

		AMateria 			& operator=(AMateria const & src);
		
		std::string 		const & getType() const;
		unsigned int 		getXP() const;
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif