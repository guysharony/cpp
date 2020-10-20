/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 13:06:16 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/20 13:07:15 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}