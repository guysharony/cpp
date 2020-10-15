/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataBase.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 10:47:35 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/13 10:47:35 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATABASE_CLASS_HPP
# define DATABASE_CLASS_HPP
# include <iostream>

class DataBase
{
	public:
		DataBase();
		~DataBase();

		void Insert(std::string name);
		void Print(std::string str);
		void getInfo();
		void Show(int i);
		void Table();

	private:
		void Query(std::string name);
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_address;
		std::string _email_address;
		std::string _phone_number;
		std::string _birthday_date;
		std::string _favorite_meal;
		std::string _underwear_color;
		std::string _darkest_secret;
};

#endif