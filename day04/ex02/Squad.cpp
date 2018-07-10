/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 21:19:12 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/30 22:44:03 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad () {

}

Squad::Squad (Squad const & src) {
	*this = src;
	return;
}

int Squad::getCount() const {
	return this->count;
}

ISpaceMarine* Squad::getUnit(int index) const {
	if (this->marines[index] == NULL)
		return NULL;
	return this->marines[index];
}

int Squad::push(ISpaceMarine* marine) {
	this->marines[this->count] = marine;
	this->count++;
	return this->getCount();
}

Squad & Squad::operator=(Squad const & rhs) {
	for (int i = 0; i < this->count; i++) {
		if (this->marines[i] != NULL)
			delete this->marines[i];
	}
	this->count = 0;
	for (int i = 0; i < rhs.getCount(); i++) {
		this->marines[i] = rhs.getUnit(i);
		this->count++;
	}
	return *this;
}

Squad::~Squad () {
	for (int i = 0; i < this->count; i++) {
		if (this->marines[i] != NULL)
			delete this->marines[i];
	}
}
