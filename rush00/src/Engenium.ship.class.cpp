/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Engenium.ship.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:23:42 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 23:15:42 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Engenium.ship.class.hpp"

Engenium::Engenium(int y, int x, int length, int height, WINDOW *win) : IBoundingBox(win) {
	this->name = "Engenium";
	this->type = "light";
	this->lives = 1;
	this->health = 100;
	this->pointsCost = 10;
	this->weapons[0] = new RailGun(y + (height / 2), x + length, win);
	this->weaponEquiped = this->weapons[0];
	this->weaponCount = 1;

	this->setY(y);
	this->setX(x);
	this->setLength(length);
	this->setHeight(height);
	this->setRepresent('A');
	return;
}
Engenium::Engenium(Engenium const & src) : IBoundingBox(src) {
	*this = src;
	return;
}
Engenium::~Engenium() {
	for (int i = 0; i < this->weaponCount; i++)
		delete this->weapons[i];
	this->weaponEquiped = NULL;
}

/**
* TODO: finish copy constructor deep
*/
Engenium & Engenium::operator=(const Engenium &rhs) {
	if (this != &rhs) {
		this->name = rhs.getName();
		this->type = rhs.getType();
	}
	return *this;
}
IShip* Engenium::clone() const {
	return new Engenium(*this);
}


bool Engenium::canShoot(void) const {	return this->weaponEquiped->getNumBullets() > 0;	}

IBullet * Engenium::fire(bool is_user = false) const {
	if (this->isWeaponEquiped() && this->canShoot())
		return this->weaponEquiped->fire(is_user);
	return NULL;
}

void Engenium::takeDamage(int damage) {
	this->health -= damage;
}

void Engenium::draw(int direction) {
	std::string ship_line(this->lenght, this->represent);
	for (int i = 0; i < this->height; i++)
		mvwprintw(this->getWin(), (int)this->getCurY() + i, (int)this->getCurX(), "%*s", this->lenght, ship_line.c_str());
	this->weaponEquiped->move(this->getCurY() + (this->getHeight() / 2), this->getCurX() + direction * this->getLength());
	this->weaponEquiped->draw(1);
}

void Engenium::autoMove(int direction, int dest) {
	this->setX(this->getCurX() + dest * direction);
	this->draw(direction);
}
