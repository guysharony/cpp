/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 15:34:55 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/12 16:06:17 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void)
		:
			std::stack<T>()
		{
			return;
		}
		
		MutantStack(MutantStack const & src)
		:
			std::stack<T>(src)
		{
			return;
		}
		
		virtual ~MutantStack()
		{
			return;
		}

		MutantStack 	&operator=(MutantStack const & src)
		{
			this->c = src.c;
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin(void)
		{
			return (this->c.begin());
		}

		iterator	end(void)
		{
			return (this->c.end());
		}
		
};

#endif