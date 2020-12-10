/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:02:07 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/10 12:32:17 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_CLASS_HPP
# define CONVERT_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <fstream>
# include <sstream>

class Convert
{
	public:
		Convert(std::string const & input);
		Convert(Convert const & src);
		~Convert();

		Convert				&operator=(Convert const & src);

		float				getInput(void) const;
		void				setInput(std::string const & input);
		
		std::string			getChar(void);
		std::string			getInt(void);
		std::string			getFloat(void);
		std::string			getDouble(void);
		
	private:
		Convert(void);
		float 				_input;
};

#endif