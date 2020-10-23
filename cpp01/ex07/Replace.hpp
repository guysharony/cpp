/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:31:11 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/23 11:35:49 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_CLASS_HPP
# define REPLACE_CLASS_HPP

# include <iostream>
# include <string>

class Replace {
	public:
		Replace(std::string const &filename, std::string const &s1, std::string const &s2);
		~Replace(void);

		int	verify(void) const;
		
	private:
		std::string filename;
		std::string s1;
		std::string s2;
};

#endif