/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:25:37 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:55:40 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string const & name) {
	this->name = name;
	this->ap = 40;
	weapon = NULL;
	return ;
}

Character::Character (Character const & src) {
	*this = src;
	return;
}

Character::~Character () {}

std::string Character::getName(void) const {
	return this->name;
}
int Character::getAp(void) const {
	return this->ap;
}
AWeapon * Character::getWeapon(void) const {
	return this->weapon;
}

Character & Character::operator=(Character const & rhs) {
	if (this != &rhs) {
		this->name = rhs.getName();
		this->ap = rhs.getAp();
		this->weapon = rhs.getWeapon();
	}
	return *this;
}

void Character::recoverAP() {
	if (this->getAp() < 40)
		this->ap += 10;
	return;
}
void Character::equip(AWeapon* weapon) {
	this->weapon = weapon;
}
void Character::attack(Enemy* enemy) {
	if (this->ap < this->weapon->getAPCost())
		return;
	if (!this->weapon) {
		std::cout	<< this->name
					<< " attacks "
					<< enemy->getType()
					<< " with bare hands\n";
		enemy->takeDamage(0);
	}
	else {
		std::cout	<< this->name
					<< " attacks "
					<< enemy->getType()
					<< " with "
					<< this->weapon->getName()
					<< '\n';
		this->weapon->attack();
		this->ap -= this->weapon->getAPCost();
		enemy->takeDamage(this->weapon->getDamage());
	}
	return;
}


std::ostream & operator<<(std::ostream& o, Character const & character) {
	if (character.getWeapon() != NULL)
		o	<< character.getName()
			<< " has "
			<< character.getAp()
			<< " AP and wields a "
			<< character.getWeapon()->getName()
			<< "\n";
	else
		o	<< character.getName()
			<< " has "
			<< character.getAp()
			<< " AP and is unarmed\n";
	return o;
}
