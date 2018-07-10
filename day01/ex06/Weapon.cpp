/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 12:16:44 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 14:33:28 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

std::string const & Weapon::getType() {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}

Weapon::~Weapon(){}
