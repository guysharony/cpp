/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:02:07 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/10 21:37:17 by gsharony         ###   ########.fr       */
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
		Convert(char *input);
		Convert(Convert const & src);
		~Convert();

		Convert				&operator=(Convert const & src);

		void				setInput(char *input);
		
		char				getChar(void);
		int					getInt(void);
		float				getFloat(void) const;
		double				getDouble(void) const;

		class ImpossibleException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		
	private:
		Convert(void);
		double 				_input;
};

#endif