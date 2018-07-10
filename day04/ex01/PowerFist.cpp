/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:51:04 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:07:27 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() :
	AWeapon("Power Fist", 8, 50) {
		this->sound = "* pschhh... SBAM! *";
	return;
}
PowerFist::PowerFist(PowerFist const & src) : AWeapon(src) {
	*this = src;
	return;
}
PowerFist::~PowerFist() {}

std::string PowerFist::getSound() const {
	return this->sound;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs) {
	if (this != &rhs) {
		AWeapon::operator=(rhs);
		this->sound = rhs.getSound();
	}
	return *this;
}

void PowerFist::attack() const {
	std::cout << this->sound << '\n';
}
