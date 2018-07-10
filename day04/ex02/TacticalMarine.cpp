/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 21:22:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/30 22:51:19 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine () {
	std::cout << "Tactical Marine ready for battle" << '\n';
	this->bCry = "This code is unclean. PURIFY IT !";
}
TacticalMarine::TacticalMarine(TacticalMarine const & src) {
	*this = src;
	return;
}

TacticalMarine & TacticalMarine::operator=(TacticalMarine const & rhs) {
	if (this != &rhs)
		 this->bCry = rhs.getBCry();
	return *this;
}
std::string TacticalMarine::getBCry() const {
	return this->bCry;
}
TacticalMarine* TacticalMarine::clone() const {
	return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << '\n';
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << '\n';
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << '\n';
}

TacticalMarine::~TacticalMarine () {
	std::cout << "Aaargh ..." << '\n';
}
