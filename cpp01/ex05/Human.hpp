/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:42:06 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/25 15:43:29 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_HPP
# define HUMAN_CLASS_HPP

# include "Brain.hpp"

class Human {
	public:
		Human(void);
		~Human(void);
		
		const Brain &getBrain(void) const;
		std::string identify(void) const;
		
	private:
		Brain _brain;
};

#endif