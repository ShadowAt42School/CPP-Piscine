/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:19:13 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 14:14:11 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ship.class.hpp"

Ship::Ship () {
	this->weaponCount = 0;
	return;
}

Ship::Ship(Ship const & src) {
	*this = src;
	return;
}

Ship::~Ship() {}

std::string Ship::getName() const {	return this->name;		}
std::string Ship::getType() const {	return this->type;		}
int Ship::getLives() const {	return this->lives;		}
int Ship::getPointsCost() const {	return this->pointsCost;	}
int Ship::getHealth() const {	return this->health;	}
int Ship::getWeaponCount() const {	return this->weaponCount;	}
IWeapon *Ship::getWeapon(int index) const {	return this->weapons[index];	}
IWeapon* Ship::getEquipedWeapon() const {	return this->weaponEquiped;	}

Ship & Ship::operator=(Ship const & rhs) {
	if (this != &rhs) {
		this->lives = rhs.getLives();
		this->health = rhs.getHealth();
		if (rhs.getWeaponCount() > 0) {
			this->weaponCount = 1;
			this->weaponEquiped = rhs.getWeapon(0);
			this->weapons[0] = rhs.getWeapon(0);
		}
	}
	return *this;
}

bool Ship::isAlive(void) const {	return this->health > 0;	}
bool Ship::isRespawn(void) const {	return this->lives >= 0;	}
bool Ship::isWeaponEquiped(void) const {	return this->weaponEquiped != NULL;	}
