/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 13:44:34 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap constructor called" << '\n';
	this->name = name;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDmg = 30;
	this->rangedAttackDmg = 20;
	this->armorDmgRed = 5;
	srand (time(NULL));
	return;
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "FragTrap copy constructor called" << '\n';
	*this = src;
	return;
}
FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor called" << '\n';
	return;
}
FragTrap & FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "FragTrap Assignation called" << '\n';
	ClapTrap::operator=(rhs);
	return *this;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	static Atack funcs[5] = {
		&FragTrap::meleeAttack,
		&FragTrap::rangedAttack,
		&FragTrap::poisonAttack,
		&FragTrap::screamAttack,
		&FragTrap::sourcererAttack
	};
	static std::string actionStr[5] = {
		"meleeAttack",
		"rangedAttack",
		"poisonAttack",
		"screamAttack",
		"sourcererAttack"
	};
	if (this->energyPoints < 25)
		std::cout << "No energy... Well either replenish it or well.. I am not working now." << '\n';
	else {
		std::cout << "Activation of vaulthunter_dot_exe: " << '\n';
		std::cout << "Healing 2.5% per 1 second for 40 seconds...: " << '\n';
		int tmp_health = this->hitPoints;
		for (size_t i = 1; i <= 40; i++) {
			if (this->hitPoints >= 100)
				break;
			this->hitPoints = this->hitPoints + (this->hitPoints * 0.025);
			std::cout	<< "Healed for "
						<< tmp_health
						<< " now health is at "
						<< this->getHitPoints() << "\n";
		}
		(this->*(funcs[rand() % 5]))(target);
		this->energyPoints -= 25;
	}
}
