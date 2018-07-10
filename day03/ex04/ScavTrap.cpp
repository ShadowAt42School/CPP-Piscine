/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 01:35:00 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDmg = 20;
	this->rangedAttackDmg = 15;
	this->armorDmgRed = 3;
	std::cout << "ScavTrap constructor called" << '\n';
	srand (time(NULL));
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	std::cout << "ScavTrap Copy constructor called" << '\n';
	*this = src;
	return;
}
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor called" << '\n';
	return;
}
ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << "ScavTrap Assignation called" << '\n';
	ClapTrap::operator=(rhs);
	return *this;
}

void ScavTrap::rangedChallenge(void) {
	std::cout << "FRZ6-TP " + this->getName() + " challenges newcomer for archery. Contestant will have to shoot an arrow into an apple which will be placed on the head of zergling. (Yes, StarCraf)" << '\n';
}
void ScavTrap::meleeChalenge(void) {
	std::cout << "FRZ6-TP " + this->getName() + " challenges newcomer for hand to hand battle. Contestant will have to beat the plush toy to its finest vzbitie" << '\n';
}
void ScavTrap::physicalChallenge(void) {
	std::cout << "FRZ6-TP " + this->getName() + " challenges newcomer for has to demosntrate strenght and agility, thus Contestant will jump over sleeping beauty and them make her wake up." << '\n';
}
void ScavTrap::screamChallenge(void) {
	std::cout << "FRZ6-TP " + this->getName() + " challenges newcomer for scream as hard as contestant can. What tp scream we will tell you :)" << '\n';
}
void ScavTrap::sourceryChallenge(void) {
	std::cout << "FRZ6-TP " + this->getName() + " challenges newcomer for creating an frog-sickle, cause defender is thursty." << '\n';
}

void ScavTrap::challengeNewcomer(void) {
	static Challenge funcs[5] = {
		&ScavTrap::rangedChallenge,
		&ScavTrap::meleeChalenge,
		&ScavTrap::physicalChallenge,
		&ScavTrap::screamChallenge,
		&ScavTrap::sourceryChallenge
	};
	static std::string actionStr[5] = {
		"meleeChallen",
		"rangedChallenge",
		"physicalChallenge",
		"screamChallenge",
		"sourceryChallenge"
	};
	(this->*(funcs[rand() % 5]))();
}
