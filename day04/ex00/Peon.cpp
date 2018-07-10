/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:01:10 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 18:15:47 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	this->name = name;
	std::cout	<< "Zog zog.\n";
	return;
}
Peon::Peon(Peon const &src) : Victim(src){
	*this = src;
	return;
}
Peon::~Peon(void) {
	std::cout	<< "Bleuark..." << '\n';
}

void Peon::setName(std::string name) {
	this->name = name;
}
std::string Peon::getName() const {
	return this->name;
}

Peon & Peon::operator=(Peon const &rhs) {
	if (this != &rhs) {
		this->name = rhs.getName();
	}
	return *this;
}

void Peon::getPolymorphed() const {
	std::cout	<< this->name
				<< " has been turned into a pink pony !\n";
}
