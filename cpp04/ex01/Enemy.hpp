/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:16:19 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/03 09:42:22 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

# include <iostream>
# include <string>

class Enemy
{
    private:
        Enemy(void);

    protected:
        int             _hp;
        std::string     _type;    
    
    public:
        Enemy(int hp, std::string const & type);
		Enemy(Enemy const & src);
		Enemy & operator=(Enemy const & src);
        virtual ~Enemy();

        std::string const   getType(void) const;
        int                 getHP(void) const;

        virtual void 		takeDamage(int);
};

#endif