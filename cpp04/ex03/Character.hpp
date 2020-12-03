/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:24:44 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/03 11:40:23 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character(std::string name);
		Character(Character const & src);
		virtual ~Character();
		
		virtual std::string const & getName() const;
		
		virtual void 				equip(AMateria* m);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter& target);
	
	protected:
		std::string 				_name;
		int							_indx;
		AMateria					*_inv[4];
		
	private:
		Character(void);
		void						_initAMateria(void);
};

#endif