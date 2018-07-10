/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 17:23:29 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 23:23:55 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int count) {
	std::srand ( std::time(NULL) );
	this->list = new Zombie[count]();
	this->count = count;
}

void ZombieHorde::announce() {
	for (int i = 0; i < count; i++)
		list[i].announce();
}

ZombieHorde::~ZombieHorde() {
	delete [] list;
}
