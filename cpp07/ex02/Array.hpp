﻿/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 13:22:06 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/16 16:21:29 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array(void)
		:
			_array(NULL),
			_size(0)
		{
			return;
		}
		
		Array(unsigned int n)
		:
			_array(new T[n]),
			_size(n)
		{
			return;
		}
		
		Array(Array const & src)
		{
			*this = src;
			return;
		}
		
		~Array()
		{
			if (this->_array != NULL)
				delete [] this->_array;
			return;
		}

		Array	&operator=(Array const & src)
		{
			T	*tmp = new T[src.size()];
			for (unsigned int i = 0; i < src.size(); i++)
				tmp[i] = src._array[i];
			delete [] this->_array;
			this->_array = tmp;
			this->_size = src.size();
			return (*this);
		}
		
		T		&operator[](unsigned int n)
		{
			if (n < 0 || n >= this->_size || _array == NULL)
				throw Array::ForbiddenArray();
			return (this->_array[n]);
		}

		unsigned int	size(void) const
		{
			return (this->_size);
		}
	
		class ForbiddenArray : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: This element is out of Array memory.");
				}
		};
		
	private:
		T				*_array;
		unsigned int	_size;
};

#endif