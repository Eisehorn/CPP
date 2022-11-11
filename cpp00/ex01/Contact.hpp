/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:32:23 by fgiulian          #+#    #+#             */
/*   Updated: 2022/11/11 19:32:25 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	std::string get_first_name();
	void set_first_name(std::string first_name);
	std::string get_last_name();
	void set_last_name(std::string last_name);
	std::string get_nickname();
	void set_nickname(std::string nickname);
	std::string get_phone_number();
	void set_phone_number(std::string phone_number);
	std::string get_darkest_secret();
	void set_darkest_secret(std::string darkest_secret);
};

std::string Contact::get_first_name() {
	return this->first_name;
}

void Contact::set_first_name(std::string first_name) {
	this->first_name = first_name;
}

#endif
