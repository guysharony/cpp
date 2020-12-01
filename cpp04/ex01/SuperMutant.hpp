/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:52:13 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/01 10:05:59 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_HPP
# define SUPERMUTANT_CLASS_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy {
    public:
        SuperMutant(void);
        SuperMutant(SuperMutant const &src);
        virtual ~SuperMutant(void);

        SuperMutant &operator=(SuperMutant const & src);

        virtual void takeDamage(int);
};

#endif