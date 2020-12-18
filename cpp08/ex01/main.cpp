/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 14:10:57 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/18 09:05:25 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int		main(void)
{
	std::cout << "<=== Test 1 ===>" << std::endl;
	std::cout << "[Creating Span1 of size 5]" << std::endl;
	Span span1 = Span(5);
	
	try {
		span1.addNumber(5);
		std::cout << "Adding [5  ] to Span1" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		span1.addNumber(3);
		std::cout << "Adding [3  ] to Span1" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		span1.addNumber(17);
		std::cout << "Adding [17 ] to Span1" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		span1.addNumber(9);
		std::cout << "Adding [9  ] to Span1" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		span1.addNumber(11);
		std::cout << "Adding [11 ] to Span1" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		long a = span1.shortestSpan();
		std::cout << "[Shortest Span1 is " << a << " (5 and 3)]" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		long b = span1.longestSpan();
		std::cout << "[Longest Span1 is " << b << " (17 and 3)]" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "<=== Test 2 ===>" << std::endl;
	std::cout << "[Creating Span2 of size 4]" << std::endl;
	Span span2 = Span(4);
	
	std::cout << "[Trying to add 5 ints to Span: -5, 0, -10, 6, 10]" << std::endl;
	try {
		span2.addNumber(-5);
		std::cout << "Adding [-5 ] to Span2" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	try {
		span2.addNumber(0);
		std::cout << "Adding [0  ] to Span2" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		span2.addNumber(-10);
		std::cout << "Adding [-10] to Span2" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		span2.addNumber(6);
		std::cout << "Adding [6  ] to Span2" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		span2.addNumber(10);
		std::cout << "Adding [10 ] to Span2" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		long a = span2.shortestSpan();
		std::cout << "[Shortest Span2 is " << a << " (-5 and 0)]" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	try {
		long b = span2.longestSpan();
		std::cout << "[Longest Span2 is " << b << " (-10 and 6)]" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "<=== Test 3 ===>" << std::endl;
	std::cout << "[Creating Span3 of size 1]" << std::endl;
	Span span3 = Span(1);
	
	try {
		span3.addNumber(1);
		std::cout << "Adding [1  ] to Span3" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		long a = span3.shortestSpan();
		std::cout << "[Shortest Span3 is " << a << "]" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	try {
		long b = span3.longestSpan();
		std::cout << "[Longest Span3 is " << b << "]" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "<=== Test 4 ===>" << std::endl;
	std::cout << "[Creating Span4 of size 2]" << std::endl;
	Span span4 = Span(2);
	
	try {
		span4.addNumber(2147483647);
		std::cout << "Adding [2147483647 ] to Span4" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		span4.addNumber(-2147483648);
		std::cout << "Adding [-2147483648] to Span4" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		long a = span4.shortestSpan();
		std::cout << "[Shortest Span4 is " << a << "]" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	try {
		long b = span4.longestSpan();
		std::cout << "[Longest Span4 is " << b << "]" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << "<=== Test 5 ===>" << std::endl;
	std::cout << "[Creating Span5 of size 25000]" << std::endl;
	Span span5 = Span(25000);
	std::cout << "[Creating vector of size 25000]" << std::endl;
	std::vector<int>	vector(25000);

	std::cout << "[Adding numbers from 0 to 25000]" << std::endl;
	for (int i = 0; i < 25000; i++)
		vector[i] = i;

	std::cout << "[Adding numbers from vector to span5]" << std::endl;
	span5.addNumber(vector.begin(), vector.end());

	try {
		long a = span5.shortestSpan();
		std::cout << "[Shortest Span5 is " << a << "]" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	try {
		long b = span5.longestSpan();
		std::cout << "[Longest Span5 is " << b << "]" << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	return (0);
}