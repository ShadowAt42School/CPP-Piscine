/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:01:10 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 18:14:14 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) {
	this->name = name;
	this->title = title;
	std::cout	<< this->name
				<< ", "
				<< this->title
				<< ", is born\n";
	return;
}
Sorcerer::Sorcerer(Sorcerer const &src) {
	*this = src;
	return;
}
Sorcerer::~Sorcerer(void) {
	std::cout	<< this->name
				<< ", "
				<< this->title
				<< ", is dead. Consequences will never be the same !" << '\n';
}

void Sorcerer::setName(std::string name) {
	this->name = name;
}
void Sorcerer::setTitle(std::string title) {
	this->title = title;
}
std::string Sorcerer::getName() const {
	return this->name;
}
std::string Sorcerer::getTitle() const {
	return this->title;
}

Sorcerer & Sorcerer::operator=(Sorcerer const &rhs) {
	if (this != &rhs) {
		this->name = rhs.getName();
		this->title = rhs.getTitle();
	}
	return *this;
}

void Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}


std::ostream & operator<<(std::ostream& o, Sorcerer const & sorcerer) {
	o	<< "I am "
		<< sorcerer.getName()
		<< ", "
		<< sorcerer.getTitle()
		<< ", and I like ponies !\n";
	return o;
}
