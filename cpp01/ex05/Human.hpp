/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:42:06 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 11:53:18 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_HPP
# define HUMAN_CLASS_HPP

# include "Brain.hpp"

class Human {
	public:
		Human(void);
		~Human(void);
		
		std::string identify(void);
		Brain		getBrain(void) const;
		
	private:
		Brain* _brain;
};

#endif