/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 07:54:05 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/11 08:52:40 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.hpp"

void 	*serialize(void)
{
	char	*tmp = new char[20];

	char	aln[63] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ0123456789";

	for(int i = 0; i < 8; i++)
		tmp[i] = aln[rand() % 62];
	*reinterpret_cast<int *>(tmp + 8) = rand() % 2147483647;
	for(int i = 0; i < 8; i++)
		tmp[i + 12] = aln[rand() % 62];
	return (static_cast<void *>(tmp));
}

Data 	*deserialize(void * raw)
{
	Data	*data = new Data();
	char	*tmpChar = reinterpret_cast<char *>(raw);
	int		*tmpInt = reinterpret_cast<int *>(raw);
	
	data->s1 = std::string(tmpChar, 8);
	data->n = *(tmpInt + 8);
	data->s2 = std::string(tmpChar + 12, 8);
	return (data);
}