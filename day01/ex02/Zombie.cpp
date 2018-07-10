/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:37:47 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 20:35:37 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name, std::string type) {
	this->setName(name);
	this->setType(type);
	std::cout << "Zombie created with name " << name << " and type: " << type << '\n';
}

void Zombie::setName(std::string name) {
	this->name = name;
	return;
}
void Zombie::setType(std::string type) {
	this->type = type;
	return;
}
std::string Zombie::getName() {
	return this->name;
}
std::string Zombie::getType() {
	return this->type;
}

void Zombie::announce() {
	std::cout << "< " << this->getName() << " ( " << this->getType() << " ) > Braiiiiiiiinz" << '\n';
}

Zombie::~Zombie() {
	std::cout << "Zombie was destructed." << '\n';
}
