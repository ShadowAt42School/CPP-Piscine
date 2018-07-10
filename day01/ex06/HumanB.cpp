/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 12:57:51 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 14:24:20 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name, Weapon weapon) {
	this->name = name;
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name) {
	this->name = name;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon & weapon) {
	this->weapon = &weapon;
}

HumanB::~HumanB(){}
