/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 10:37:37 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/23 11:55:25 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv) {
	if (argc == 4) {
		Replace replace(argv[1], argv[2], argv[3]);
		
		replace.verify();
	} else
		std::cout << "Wrong number of arguments." << std::endl;
	return (0);
}