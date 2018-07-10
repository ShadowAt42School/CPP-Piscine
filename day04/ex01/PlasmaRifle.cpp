/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:51:04 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:24:17 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :
	AWeapon("Plasma Rifle", 5, 21) {
		this->sound = "* piouuu piouuu piouuu *";
	return;
}
PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src) {
	*this = src;
	return;
}
PlasmaRifle::~PlasmaRifle() {}

std::string PlasmaRifle::getSound() const {
	return this->sound;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs) {
	if (this != &rhs) {
		AWeapon::operator=(rhs);
		this->sound = rhs.getSound();
	}
	return *this;
}

void PlasmaRifle::attack() const {
	std::cout << this->sound << '\n';
}
