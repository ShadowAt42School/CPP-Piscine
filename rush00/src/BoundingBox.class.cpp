/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BoundingBox.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:01:41 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 17:09:26 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BoundingBox.class.hpp"
#include <string>
void BoundingBox::setX(int x) {	this->x = x;	}
void BoundingBox::setY(int y) {	this->y = y;	}
void BoundingBox::setLength(int length) {	this->lenght = length;	}
void BoundingBox::setHeight(int height) {	this->height = height;	}
void BoundingBox::setRepresent(int represent) {	this->represent = represent;	}
int BoundingBox::getLength(void) const {	return this->lenght;	}
int BoundingBox::getHeight(void) const {	return this->height;	}
WINDOW * BoundingBox::getWin() const {	return this->wincp;	}

BoundingBox::BoundingBox(WINDOW *win){
	this->wincp = win;
}
BoundingBox::BoundingBox(BoundingBox const & src) {
	*this = src;
	return;
}
BoundingBox::~BoundingBox() {}
BoundingBox & BoundingBox::operator=(BoundingBox const & rhs) {
	if (this != &rhs) {
		this->x = rhs.getCurX();
		this->y = rhs.getCurY();
		this->lenght = rhs.getLength();
		this->height = rhs.getHeight();
		this->wincp = rhs.getWin();
	}
	return *this;
}

int BoundingBox::getCurX(void) const {	return this->x;	}
int BoundingBox::getCurY(void) const {	return this->y;	}

void BoundingBox::moveUp(int dist) 		{	this->y -= dist;	}
void BoundingBox::moveDown(int dist) 	{	this->y += dist;	}
void BoundingBox::moveLeft(int dist) 	{	this->x -= dist;	}
void BoundingBox::moveRight(int dist) 	{	this->x += dist;	}

void BoundingBox::move(int y, int x) {	this->x = x; this->y = y;	}
