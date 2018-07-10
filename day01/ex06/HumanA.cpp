/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 12:57:51 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 14:33:52 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) {
	this->name = name;
	this->weapon = &weapon;
}

HumanA::HumanA(std::string name) {
	this->name = name;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with his " << this->weapon->getType() << '\n';
}

void HumanA::setWeapon(Weapon & weapon) {
	this->weapon = &weapon;
}

HumanA::~HumanA(){}
