/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RailGun.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 20:58:59 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 23:24:53 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RailGun.class.hpp"

RailGun::RailGun (int pos_y, int pos_x, WINDOW *win) : IBoundingBox(win) {
	this->damage = 200;
	this->numBullets = 99;
	this->splash = false;

	this->setX(pos_x);
	this->setY(pos_y);
	this->setRepresent('>');
	return;
}

RailGun::RailGun(RailGun const & src): IBoundingBox(src) {
	*this = src;
	return;
}
RailGun::~RailGun() {}

IWeapon* RailGun::clone() const {
	return new RailGun(*this);
}
RailGun & RailGun::operator=(const RailGun &rhs) {
	if (this != &rhs) {
		this->damage = rhs.getDamage();
		this->numBullets = rhs.getNumBullets();
		this->splash = rhs.splash;
	}
	return *this;
}

IBullet * RailGun::fire(bool is_user) const {
	is_user = true;
	IBullet *bullet = new LineStyle(this->damage, "semi", this->getWin());
	bullet->fire(this->getCurY(), this->getCurX() + 1, is_user);
	return bullet;
}

void RailGun::draw(int direction) {
	direction = 1;
	mvwprintw(this->getWin(), this->getCurY(), this->getCurX(), "%c", this->represent);
}
