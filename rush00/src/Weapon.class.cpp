/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:30:16 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 14:14:13 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon() {}

Weapon::Weapon(Weapon const & src) {
	*this = src;
	return;
}
Weapon::~Weapon() {}

void Weapon::setDamage(int n) {	this->damage = n;	}
void Weapon::setNumBullets(int n) {	this->numBullets = n;	}
void Weapon::setSplash(bool n) {	this->splash = n;	}
int Weapon::getDamage(void) const {	return this->damage;	}
int Weapon::getNumBullets(void) const {	return this->numBullets;	}
bool Weapon::getSplash(void) const {	return this->splash;	}

Weapon & Weapon::operator=(Weapon const & rhs) {
	this->damage = rhs.getDamage();
	return *this;
}

bool Weapon::canShoot() const {	return this->numBullets > 0;	}
