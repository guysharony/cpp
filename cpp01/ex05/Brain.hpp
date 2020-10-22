/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:42:10 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 14:47:41 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain {
	public:
		Brain(void);
		~Brain(void);
		
		int getIQ(void) const;
		int getNeurons(void) const;
		
		std::string identify(void) const;
		
	private:
		int	_IQ;
		int	_neurons;
};

#endif