/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:55:22 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/08 14:24:10 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_CLASS_HPP
# define RADSCORPION_CLASS_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy {
    public:
        RadScorpion(void);
        RadScorpion(RadScorpion const &src);
        virtual ~RadScorpion();

		RadScorpion 	&operator=(RadScorpion const & src);
};

#endif