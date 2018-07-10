/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 21:22:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/30 22:49:43 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator () {
	std::cout << "* teleports from space *" << '\n';
	this->bCry = "This code is unclean. PURIFY IT !";
}
AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) {
	*this = src;
	return;
}
AssaultTerminator & AssaultTerminator::operator=(AssaultTerminator const & rhs) {
	if (this != &rhs)
		this->bCry = rhs.getBCry();
	return *this;
}

std::string AssaultTerminator::getBCry() const {
	return this->bCry;
}

AssaultTerminator* AssaultTerminator::clone() const {
	return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const {
	std::cout << this->bCry << '\n';
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << '\n';
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << '\n';
}

AssaultTerminator::~AssaultTerminator () {
	std::cout << "I'll be back ..." << '\n';
}
