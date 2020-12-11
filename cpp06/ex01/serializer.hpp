/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 07:54:00 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/11 07:56:48 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <cstdlib>

struct Data
{
	std::string 	s1;
	int 			n;
	std::string 	s2;
};

void 	*serialize(void);
Data 	*deserialize(void * raw);

#endif