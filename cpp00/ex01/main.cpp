/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:20:19 by fgiulian          #+#    #+#             */
/*   Updated: 2022/12/13 18:44:09 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
	PhoneBook phonebook;
	int i = 0;
	int j = 0;
	int k = 0;
	std::string temp;

	while (j == 0) {
		std::cout<<"Enter ADD, SEARCH or EXIT"<<std::endl;
		std::getline(std::cin, temp);
		if (std::cin.eof())
			return 0;
		if (temp == "ADD") {
			phonebook.phonebook_add(i);
			i++;
			if (i == 8)
				i = 0;
		}
		else if (temp == "SEARCH") {
			phonebook.phonebook_display();
			std::cout<<"Enter contact index"<<std::endl;
			std::getline(std::cin, temp);
			if (std::cin.eof())
				return 0;
			if (temp.length() == 1 && 8 > temp[0] - 48 && temp[0] - 48 >= 0) {
				k = temp[0] - 48;
				phonebook.phonebook_search(k);
			}
			else
				std::cout<<"Index not valid"<<std::endl;
		}
		else if (temp == "EXIT"){
			j = 1;
		}
	}
	return 0;
}
