/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 11:32:38 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/25 17:33:23 by gsharony         ###   ########.fr       */
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
		return (0);
	}
	ifs.open(this->filename);
	if (!ifs.is_open()) {
		std::cout << "File [" << this->filename << "] doesn't exist!" << std::endl;
		return (0);
	}
	ifs.close();
	return (1);
}

void	Replace::change(void) const {
	std::ifstream 		ifs;
	std::ofstream 		ofs(this->filename + ".replace");
	std::ostringstream	oss;
	std::string			str;
	size_t				pos;
	
	ifs.open(this->filename);
	oss << ifs.rdbuf();
	str = oss.str();
	while ((pos = str.find(this->s1)) != std::string::npos) {
		str.replace(pos, std::string(this->s1).length(), this->s2);
	}
	ifs.close();
	ofs << str;
	ofs.close();
	return;
}