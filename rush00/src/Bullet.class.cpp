/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 05:54:56 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 14:40:52 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.class.hpp"

Bullet::Bullet(int damage, std::string type) {
	this->damage = damage;
	this->type = type;
	return;
}
Bullet::Bullet(Bullet const & src) {
	*this = src;
	return;
}
Bullet::~Bullet() {}

void Bullet::setPlayerPtr(bool is_player) {	this->isPlayer = is_player;	}
bool Bullet::getPlayerPtr(void) const {	return this->isPlayer;	}

int Bullet::getDamage() const {	return this->damage;	}
std::string Bullet::getType() const {	return this->type;	}

Bullet & Bullet::operator=(const Bullet &rhs) {
	if (this != &rhs) {
		this->damage = rhs.getDamage();
		this->type = rhs.getType();
	}
	return *this;
}
