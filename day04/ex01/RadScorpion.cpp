/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:21:37 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/30 22:16:45 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion ()
	: Enemy(80, "Rad Scorpion") {
	std::cout << "* click click click *" << '\n';
	return;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src) {
	*this = src;
	return;
}
RadScorpion::~RadScorpion () {
	std::cout << "* SPROTCH *" << '\n';
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs) {
	Enemy::operator=(rhs);
	return *this;
}

void RadScorpion::takeDamage(int damage) {
	this->hp -= damage;
	if (this->hp <= 0) {
		delete this;
		return;
	}
}
