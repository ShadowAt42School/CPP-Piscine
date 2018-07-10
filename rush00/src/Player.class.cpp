/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:18:34 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 14:35:11 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.class.hpp"

Player::Player() {}
Player::Player(IShip *ship) {
	this->score = 0;
	this->ship = ship;
	return;
}
Player::Player(Player const & src) {
	*this = src;
	return;
}
Player::~Player() {
	delete this->ship;
	this->score = 0;
}

int Player::getScore() const {	return this->score;	}
IShip * Player::getShip() const {	return this->ship;	}

Player & Player::operator=(const Player &rhs) {
	if (this != &rhs) {
		this->score = 0;
		this->ship = rhs.getShip()->clone();
	}
	return *this;
}
