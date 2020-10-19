/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsharony <gsharony@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 11:13:27 by gsharony          #+#    #+#             */
/*   Updated: 2020/10/19 09:11:09 by gsharony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>

class Contact {
	public:
		Contact(void);
		~Contact(void);

		void getAll(void) const;

		void setFirstName(void);
		void setLastName(void);
		void setNickname(void);
		void setLogin(void);
		void setPostalAddress(void);
		void setEmailAddress(void);
		void setPhoneNumber(void);
		void setBirthdayDate(void);
		void setFavoriteMeal(void);
		void setUnderwearColor(void);
		void setDarkestSecret(void);

		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickname(void) const;
		std::string	getLogin(void) const;
		std::string	getPostalAddress(void) const;
		std::string	getEmailAddress(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getBirthdayDate(void) const;
		std::string	getFavoriteMeal(void) const;
		std::string	getUnderwearColor(void) const;
		std::string	getDarkestSecret(void) const;

	private:
		std::string _input(std::string str) const ;
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