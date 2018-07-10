/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:54:13 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 17:19:43 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main() {
	ZombieEvent zombieEvent;
	Zombie *zombie;

	std::cout << "Dynamic with Default type and default Name through functions" << '\n';
	zombie = zombieEvent.newZombie();
	zombie->announce();
	delete zombie;
	std::cout << '\n';

	std::cout << "Dynamic with Default type" << '\n';
	zombie = zombieEvent.newZombie("Dynamic");
	zombie->announce();
	delete zombie;
	std::cout << '\n';

	std::cout << "Dynamic with Default type through set function" << '\n';
	zombieEvent.setZombieType();
	zombie = zombieEvent.newZombie("Dynamic");
	zombie->announce();
	delete zombie;
	std::cout << '\n';

	std::cout << "Dynamic with set type" << '\n';
	zombieEvent.setZombieType("ugly");
	zombie = zombieEvent.newZombie("Dynamic");
	zombie->announce();
	delete zombie;
	std::cout << '\n';

	std::cout << "Random name, on stack and predefined type" << '\n';
	zombieEvent.randomChump();
	std::cout << '\n';

	std::cout << "Random name, on stack and default type" << '\n';
	zombieEvent.randomChumpDefaultType();
	std::cout << '\n';
	return 0;
}
