/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiulian <fgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:32:30 by fgiulian          #+#    #+#             */
/*   Updated: 2022/11/15 16:48:05 by fgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::get_first_name() {
	return first_name;
}

void Contact::set_first_name(std::string first_name) {
	this->first_name = first_name;
}

std::string Contact::get_last_name() {
	return last_name;
}

void Contact::set_last_name(std::string last_name) {
	this->last_name = last_name;
}

std::string Contact::get_nickname() {
	return nickname;
}

void Contact::set_nickname(std::string nickname) {
	this->nickname = nickname;
}

std::string Contact::get_phone_number() {
	return phone_number;
}

void Contact::set_phone_number(std::string phone_number) {
	this->phone_number = phone_number;
}

std::string Contact:: get_darkest_secret() {
	return darkest_secret;
}

void Contact::set_darkest_secret(std::string darkest_secret) {
	this->darkest_secret = darkest_secret;
}
