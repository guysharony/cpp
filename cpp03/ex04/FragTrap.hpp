/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:53:43 by gsharony          #+#    #+#             */
/*   Updated: 2020/11/06 11:25:18 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		
		FragTrap & operator=(FragTrap const & rhs);

		void vaulthunter_dot_exe(std::string const & target);
};

#endif