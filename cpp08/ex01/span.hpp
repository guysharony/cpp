/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 14:11:02 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/16 15:30:43 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	public:
		Span(unsigned int n);
		Span(Span const & src);
		~Span();

		Span const &operator=(Span const & src);

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);

		class ArrayIsFull : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class ArrayIsTooShort : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		Span(void);
		unsigned int		_n;
		std::vector<int>	_array;
};

#endif