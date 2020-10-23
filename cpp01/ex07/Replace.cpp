/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:32:38 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/23 11:54:46 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string const &filename, std::string const &s1, std::string const &s2): filename(filename), s1(s1), s2(s2) {}

Replace::~Replace(void){};

int	Replace::verify(void) const {
	std::ifstream ifs;
	
	if (this->filename.length() < 1 || this->s1.length() < 1 || this->s2.length() < 1) {
		if (this->filename.length() < 1)
			std::cout << "Filename is too short!" << std::endl;
		if (this->s1.length() < 1)
			std::cout << "Search string is too short!" << std::endl;
		if (this->s2.length() < 1)
			std::cout << "Replace string is too short!" << std::endl;
		return (1);
	}
	ifs.open(filename, std::ifstream::in);
	if (!ifs.is_open()) {
		std::cout << "File [" << filename << "] doesn't exist!" << std::endl;
		return (1);
	}
	return (0);
}