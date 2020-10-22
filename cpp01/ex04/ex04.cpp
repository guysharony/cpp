/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 10:30:46 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/22 10:37:12 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {
	std::string 	str = "HI THIS IS BRAIN";
	std::string* 	ptr = &str;
	std::string& 	ref = str;
	return (0);
}