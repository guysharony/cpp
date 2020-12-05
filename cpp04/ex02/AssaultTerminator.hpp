/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 09:11:39 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:42:15 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_CLASS_HPP
# define ASSAULTTERMINATOR_CLASS_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & src);
		virtual ~AssaultTerminator();

		AssaultTerminator 		&operator=(AssaultTerminator const & src);

		virtual ISpaceMarine* 	clone() const;
		virtual void 			battleCry() const;
		virtual void 			rangedAttack() const;
		virtual void 			meleeAttack() const;
};

#endif