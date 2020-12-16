/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 15:34:50 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/16 14:48:22 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int		main(void)
{
	std::cout << "<=== Test 1 ===>" << std::endl;
	std::cout << "[Creating MutantStack mstack]" << std::endl;
	MutantStack<int> mstack;

	std::cout << "Adding 5 & 17 to the mstack" << std::endl;
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "Latest value of mstack is " << mstack.top() << std::endl;
	std::cout << "Removing latest value of mstack" << std::endl;
	mstack.pop();
	std::cout << "Size of mstack is " << mstack.size() << std::endl;
	
	std::cout << "Adding 3, 5, 737, 0 to the mstack" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	
	std::cout << std::endl;
	std::cout << "<=== Test 2 ===>" << std::endl;
	std::cout << "[Creating Stack s]" << std::endl;
	std::stack<int> s(mstack);
	
	std::cout << "Latest value of Stack s is " << s.top() << std::endl;
	std::cout << "Size of Stack s is " << s.size() << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Test 3 ===>" << std::endl;
	std::cout << "[Creating List l]" << std::endl;
	std::list<int> l;

	std::cout << "Adding 5 & 17 to the List l" << std::endl;
	l.push_back(5);
	l.push_back(17);
	
	std::cout << "Latest value of List l is " << l.back() << std::endl;
	std::cout << "Removing latest value of List l" << std::endl;
	l.pop_back();
	std::cout << "Size of List l is " << l.size() << std::endl;
	
	std::cout << "Adding 3, 5, 737, 0 to the List l" << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	
	std::list<int>::iterator it2 = l.begin();
	std::list<int>::iterator ite2 = l.end();
	++it2;
	--it2;
	while (it2 != ite2) {
		std::cout << *it2 << std::endl;
		++it2;
	}
	
	return (0);
}