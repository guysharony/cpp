/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:02:07 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/10 09:40:50 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_CLASS_HPP
# define CONVERT_CLASS_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>

class Convert
{
	public:
		Convert(void);
		Convert(std::string const & input);
		Convert(Convert const & src);
		~Convert();

		Convert				&operator=(Convert const & src);

		std::string			getInput(void) const;
		void				setInput(std::string const & input);
		
		void				_init(std::string const & input);
		
	private:
		std::string 		_input;
};

#endif