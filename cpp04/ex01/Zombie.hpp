/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 14:37:41 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 14:39:45 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

# include "Enemy.hpp"

class Zombie : public Enemy {
    public:
        Zombie(void);
        Zombie(Zombie const &src);
        virtual ~Zombie();

		Zombie	&operator=(Zombie const & src);
};

#endif