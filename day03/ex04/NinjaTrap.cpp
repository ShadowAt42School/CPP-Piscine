/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 01:41:36 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 13:58:01 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name): ClapTrap() {
	std::cout << "NinjaTrap constructor called" << '\n';
	this->name = name;
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDmg = 60;
	this->rangedAttackDmg = 5;
	this->armorDmgRed = 0;
	srand (time(NULL));
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {
	std::cout << "NinjaTrap copy constructor called" << '\n';
	*this = src;
	return;
}
NinjaTrap::~NinjaTrap(void) {
	std::cout << "NinjaTrap Destructor called" << '\n';
	return;
}
NinjaTrap & NinjaTrap::operator=(NinjaTrap const &rhs) {
	std::cout << "NinjaTrap Assignation called" << '\n';
	ClapTrap::operator=(rhs);
	return *this;
}

void NinjaTrap::ninjaShoebox(FragTrap &fragtrap) {
	if (this->energyPoints < 20) {
		std::cout << "No energy... Open different shoeBox" << '\n';
		return ;
	}
	std::cout	<< "Ninja used his skill `ninjaShoebox`.\n"
				<< "It costs 20 energy points.\n"
				<< "Now NinjaTrap will try to execute "
				<< "fragtrap ability\n";
	fragtrap.vaulthunter_dot_exe("Empraror of Great Valley");

}
void NinjaTrap::ninjaShoebox(ScavTrap &scavtrap) {
	if (this->energyPoints < 20) {
		std::cout << "No energy... Open different shoeBox" << '\n';
		return ;
	}
	std::cout	<< "Ninja used his skill `ninjaShoebox`.\n"
				<< "It costs 20 energy points.\n"
				<< "Now NinjaTrap will try to execute "
				<< "scavtrap ability\n";
	scavtrap.challengeNewcomer();

}
void NinjaTrap::ninjaShoebox(NinjaTrap &ninjatrap) {
	if (this->energyPoints < 20) {
		std::cout << "No energy... Open different shoeBox" << '\n';
		return ;
	}
	std::cout	<< "Ninja used his skill `ninjaShoebox`.\n"
				<< "It costs 20 energy points.\n"
				<< "Now NinjaTrap will try to execute "
				<< "ninjatrap ability\n";
	static Action actions[2] = {
		&ClapTrap::takeDamage,
		&ClapTrap::beRepaired
	};
	(ninjatrap.*(actions[rand() % 2]))(rand() % 50);
}
