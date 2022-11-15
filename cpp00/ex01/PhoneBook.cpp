/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:55:18 by fgiulian          #+#    #+#             */
/*   Updated: 2022/11/15 16:33:57 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook(){
}

void PhoneBook::phonebook_add(int i) {
    std::string temp;
    std::cout<<"Enter first name:"<<std::endl;
    std::getline(std::cin, temp);
    this->_contact[i].set_first_name(temp);
    std::cout<<"Enter last name:"<<std::endl;
    std::getline(std::cin, temp);
    this->_contact[i].set_last_name(temp);
    std::cout<<"Enter nickname:"<<std::endl;
    std::getline(std::cin, temp);
    this->_contact[i].set_nickname(temp);
    std::cout<<"Enter phone number:"<<std::endl;
    std::getline(std::cin, temp);
    this->_contact[i].set_phone_number(temp);
    std::cout<<"Enter darkest secret:"<<std::endl;
    std::getline(std::cin, temp);
    this->_contact[i].set_darkest_secret(temp);
}

void PhoneBook::phonebook_display() {
    for(int i = 0; i < 8; i++) {
    std::string temp;
    std::cout<< std::right<< i <<" | ";
    temp = this->_contact[i].get_first_name();
    if (temp.length() > 9)
        temp.replace(9, 9, ".");
    std::cout<< std::right<< temp.substr(0, 10) <<" | ";
    temp = this->_contact[i].get_last_name();
    if (temp.length() > 8)
        temp.replace(9, 9, ".");
    std::cout<< std::right<< temp.substr(0, 10) <<" | ";
    temp = this->_contact[i].get_nickname();
    if (temp.length() > 8)
        temp.replace(9, 9, ".");
    std::cout<< std::right<< temp.substr(0, 10) <<std::endl;
    }
}

void PhoneBook::phonebook_search(int i) {
    std::string temp;
    temp = this->_contact[i].get_first_name();
    std::cout<<temp<<std::endl;
    temp = this->_contact[i].get_last_name();
    std::cout<<temp<<std::endl;
    temp = this->_contact[i].get_nickname();
    std::cout<<temp<<std::endl;
    temp = this->_contact[i].get_phone_number();
    std::cout<<temp<<std::endl;
    temp = this->_contact[i].get_darkest_secret();
    std::cout<<temp<<std::endl;
}