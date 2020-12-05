/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:16:19 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/05 09:38:18 by gsharony         ###   ########.fr       */
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
		int             	_hp;
        std::string     	_type;  
    
    public:
        Enemy(int hp, std::string const & type);
		Enemy(Enemy const & src);
        virtual ~Enemy();

		Enemy 				&operator=(Enemy const & src);

        std::string const   getType(void) const;
        int                 getHP(void) const;

        virtual void 		takeDamage(int);
};

#endif