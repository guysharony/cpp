/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 10:25:09 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/09 14:48:28 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & src);
		virtual ~MateriaSource();

		MateriaSource 		&operator=(MateriaSource const & src);

		virtual void 		learnMateria(AMateria*);
		virtual AMateria* 	createMateria(std::string const & type);
		void				show(void);

	protected:
		int					_indx;
		AMateria			*_inv[4];

	private:
		int					_isAMateria(int n);
		void				_initAMateria(void);
		void				_clearAMateria(void);
		void				_addAMateria(AMateria* m);
		void				_cloneAMateria(MateriaSource const & src);
};

#endif