/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:32:18 by fgiulian          #+#    #+#             */
/*   Updated: 2022/11/15 16:30:52 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact _contact[8];
public:
	PhoneBook();
	~PhoneBook();
	void phonebook_add(int i);
	void phonebook_display();
	void phonebook_search(int i);
};

#endif
