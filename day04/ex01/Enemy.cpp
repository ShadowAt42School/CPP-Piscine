/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:09:08 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/30 22:20:08 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy (int hp, std::string const & type) {
	this->hp = hp;
	this->type = type;
}
Enemy::Enemy (Enemy const & src) {
	*this = src;
	return;
}
Enemy::~Enemy () {}

std::string Enemy::getType() const {
	return this->type;
}
int Enemy::getHP() const {
	return this->hp;
}

Enemy & Enemy::operator=(Enemy const & rhs) {
	if (this != &rhs) {
		this->hp = rhs.getHP();
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream & operator<<(std::ostream& o, Enemy const & character) {
	o	<< character.getType()
		<< " has "
		<< character.getHP()
		<< "\n";
	return o;
}
