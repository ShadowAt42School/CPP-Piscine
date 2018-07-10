/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:01:10 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 18:18:30 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) {
	this->name = name;
	std::cout	<< "Some random victim called "
				<< this->name
				<< " just popped !\n";
	return;
}
Victim::Victim(Victim const &src) {
	*this = src;
	return;
}
Victim::~Victim(void) {
	std::cout	<< "Victim "
				<< this->name
				<< " just died for no apparent reason !" << '\n';
}

void Victim::setName(std::string name) {
	this->name = name;
}
std::string Victim::getName() const {
	return this->name;
}

Victim & Victim::operator=(Victim const &rhs) {
	if (this != &rhs) {
		this->name = rhs.getName();
	}
	return *this;
}

void Victim::getPolymorphed() const {
	std::cout	<< this->name
				<< " has been turned into a cute little sheep !\n";
}

std::ostream & operator<<(std::ostream& o, Victim const & victim) {
	o	<< "I'm "
		<< victim.getName()
		<< "and I like otters !\n";
	return o;
}
