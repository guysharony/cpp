/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 10:02:44 by gsharony          #+#    #+#             */
/*   Updated: 2020/12/11 10:35:09 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int		main(void)
{
	std::cout << std::endl;
	std::cout << "Subject Tests" << std::endl;
	int a = 2;
	int b = 3;

	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	std::cout << std::endl;
	std::cout << "Custom Tests" << std::endl;
	int		ia = 5;
	int		ib = 10;

	float	fa = 5.5;
	float	fb = 10.23;

	char	ca = 'a';
	char	cb = 'b';

	std::cout << "<=== Swap 1/3 ===>" << std::endl;
	std::cout << "[ia: " << ia << "]" << std::endl;
	std::cout << "[ib: " << ib << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "[Swapping ia & ib]" << std::endl;
	swap(ia, ib);

	std::cout << std::endl;
	std::cout << "[ia: " << ia << "]" << std::endl;
	std::cout << "[ib: " << ib << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Swap 2/3 ===>" << std::endl;
	std::cout << "[fa: " << fa << "]" << std::endl;
	std::cout << "[fb: " << fb << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "[Swapping fa & fb]" << std::endl;
	swap(fa, fb);

	std::cout << std::endl;
	std::cout << "[fa: " << fa << "]" << std::endl;
	std::cout << "[fb: " << fb << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Swap 3/3 ===>" << std::endl;
	std::cout << "[ca: " << ca << "]" << std::endl;
	std::cout << "[cb: " << cb << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "[Swapping ca & cb]" << std::endl;
	swap(ca, cb);

	std::cout << std::endl;
	std::cout << "[ca: " << ca << "]" << std::endl;
	std::cout << "[cb: " << cb << "]" << std::endl;

	ia = 5;
	ib = 10;

	fa = 10.23;
	fb = 10.23;

	ca = 'a';
	cb = 'b';

	std::cout << std::endl;
	std::cout << "<=== Min 1/3 ===>" << std::endl;
	std::cout << "[ia: " << ia << "]" << std::endl;
	std::cout << "[ib: " << ib << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "[The smallest number is " << min<int>(ia, ib) << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Min 2/3 ===>" << std::endl;
	std::cout << "[fa: " << fa << "]" << std::endl;
	std::cout << "[fb: " << fb << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "[The smallest number is " << min<float>(fa, fb) << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Min 3/3 ===>" << std::endl;
	std::cout << "[ca: " << ca << "]" << std::endl;
	std::cout << "[cb: " << cb << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "[The smallest number is " << min<char>(ca, cb) << "]" << std::endl;

	ia = 5;
	ib = 10;

	fa = 10.23;
	fb = 10.23;

	ca = 'a';
	cb = 'b';

	std::cout << std::endl;
	std::cout << "<=== Max 1/3 ===>" << std::endl;
	std::cout << "[ia: " << ia << "]" << std::endl;
	std::cout << "[ib: " << ib << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "[The greater number is " << max<int>(ia, ib) << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Max 2/3 ===>" << std::endl;
	std::cout << "[fa: " << fa << "]" << std::endl;
	std::cout << "[fb: " << fb << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "[The greater number is " << max<float>(fa, fb) << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "<=== Max 3/3 ===>" << std::endl;
	std::cout << "[ca: " << ca << "]" << std::endl;
	std::cout << "[cb: " << cb << "]" << std::endl;

	std::cout << std::endl;
	std::cout << "[The greater number is " << max<char>(ca, cb) << "]" << std::endl;
	return (0);
}