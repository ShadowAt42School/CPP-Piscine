/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LineStyle.bullet.class.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 06:15:37 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 19:47:49 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "LineStyle.bullet.class.hpp"

LineStyle::LineStyle(int damage, std::string type, WINDOW *win) : IBoundingBox(win), IBullet(damage, type) {
	this->damage = damage;
	this->type = type;
	return;
}
LineStyle::LineStyle (LineStyle const & src) : IBoundingBox(src), IBullet(src) {
	*this = src;
	return;
}
LineStyle::~LineStyle () {}

LineStyle & LineStyle::operator=(LineStyle const & rhs) {
	if (this != &rhs) {
		this->damage = rhs.getDamage();
		this->type = rhs.getType();
	}
	return *this;
}
IBullet* LineStyle::clone() const {	return new LineStyle(*this);	}


void LineStyle::move(int direction, int amount) {
	direction = 0;
	amount = 0;
}
void LineStyle::fire(int y, int x, bool is_user = false) {
	if (is_user)
		this->isUser = is_user;
	this->setX(x);
	this->setY(y);
	this->setRepresent('-');
}
void LineStyle::collisionCheck() {

}

void LineStyle::draw(int direction) {
	direction = 1;
	mvwprintw(this->getWin(), this->getCurY(), this->getCurX(), "%c", this->represent);
}

void LineStyle::autoMove(int direction, int dest) {
	this->setX(this->getCurX() + dest * direction);
	this->draw(1);
}
