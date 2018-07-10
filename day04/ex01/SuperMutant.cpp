/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:15:25 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:21:19 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant ()
	: Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << '\n';
	return;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src) {
	*this = src;
	return;
}
SuperMutant::~SuperMutant () {
	std::cout << "Aaargh ..." << '\n';
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs) {
	Enemy::operator=(rhs);
	return *this;
}

void SuperMutant::takeDamage(int damage) {
	if (this->hp <= 0)
		return;
	this->hp -= (damage - 3);
}
