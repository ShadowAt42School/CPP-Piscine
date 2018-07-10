/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:39:09 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:24:12 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) {
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
	return;
}
AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
	return;
}
AWeapon::~AWeapon() {

}

std::string AWeapon::getName() const {
	return this->name;
}
int AWeapon::getAPCost() const {
	return this->apcost;
}
int AWeapon::getDamage() const {
	return this->damage;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs) {
	if (this != &rhs) {
		this->name = rhs.getName();
		this->apcost = rhs.getAPCost();
		this->damage = rhs.getDamage();
	}
	return *this;
}
