/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:33:30 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 23:22:28 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	std::srand ( std::time(NULL) );
}

void ZombieEvent::setZombieType(std::string type) {
	this->zType = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	if (this->zType.empty())
		return new Zombie(name);
	else
		return new Zombie(name, this->zType);
}


void ZombieEvent::randomChump() {
	std::string names[4] = {
		"Cake", "Toast", "Butter", "Jelly"
	};
	Zombie zombie(names[std::rand() % 4], "stacked");
	zombie.announce();
}

void ZombieEvent::randomChumpDefaultType() {
	std::string names[4] = {
		"Cake", "Toast", "Butter", "Jelly"
	};
	Zombie zombie(names[std::rand() % 4]);
	zombie.announce();
}

ZombieEvent::~ZombieEvent(){}
