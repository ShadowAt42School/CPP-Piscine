/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 13:32:18 by maghayev         ###   ########.fr       */
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
	std::cout << "ScavTrap Reporting for duty!" << '\n';
	srand (time(NULL));
	return;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
	std::cout << "ScavTrap finished morphing and copying itself" << '\n';
	*this = src;
	return;
}
ScavTrap::~ScavTrap(void) {
	std::cout << "My friend, you will be avenged! Bye ScavTrap..." << '\n';
	return;
}
ScavTrap & ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << "ScavTrap got new assingment" << '\n';
	if (this != &rhs) {
		this->name = rhs.getName();
		this->hitPoints = rhs.getHitPoints();
		this->maxHitPoints = rhs.getMaxHitPoints();
		this->energyPoints = rhs.getEnergyPoints();
		this->maxEnergyPoints = rhs.getMaxEnergyPoints();
		this->level = rhs.getLevel();
		this->meleeAttackDmg = rhs.getMeleeAttackDmg();
		this->rangedAttackDmg = rhs.getRangedAttackDmg();
		this->armorDmgRed = rhs.getArmorDmgRed();
	}
	return *this;
}

void ScavTrap::setName(std::string name) {
	this->name = name;
}

std::string ScavTrap::getName() const {
	return this->name;
}
int ScavTrap::getHitPoints() const {
	return this->hitPoints;
}
int ScavTrap::getMaxHitPoints() const {
	return this->maxHitPoints;
}
int ScavTrap::getEnergyPoints() const {
	return this->energyPoints;
}
int ScavTrap::getMaxEnergyPoints() const {
	return this->maxEnergyPoints;
}
int ScavTrap::getLevel() const {
	return this->level;
}
int ScavTrap::getMeleeAttackDmg() const {
	return this->meleeAttackDmg;
}
int ScavTrap::getRangedAttackDmg() const {
	return this->rangedAttackDmg;
}
int ScavTrap::getArmorDmgRed() const {
	return this->armorDmgRed;
}

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout	<< "ScavTrap "
				<< this->getName()
				<< " spits forward at "
				<< target
				<< " causes "
				<< target
				<< this->getRangedAttackDmg()
				<< " points of damage !" << '\n';
}
void ScavTrap::meleeAttack(std::string const & target) {
	std::cout	<< "ScavTrap "
				<< this->getName()
				<< " bluntly atacks opresor "
				<< target
				<< " and deals "
				<< this->getMeleeAttackDmg()
				<< " points of damage !" << '\n';
}
void ScavTrap::poisonAttack(std::string const & target) {
	std::cout	<< "ScavTrap "
				<< this->getName()
				<< " uses the most salty and poisonous words and "
				<< target
				<< " is soo ashamed that recieved "
				<< this->getRangedAttackDmg()
				<< " points of damage !" << '\n';
}
void ScavTrap::screamAttack(std::string const & target) {
	std::cout	<< "ScavTrap "
				<< this->getName()
				<< " screams and windows around him break, causing "
				<< target
				<< " to get cuts all over the body. "
				<< this->getRangedAttackDmg()
				<< " points of damage taken by "
				<< target
				<< "!" << '\n';
}
void ScavTrap::sourcererAttack(std::string const & target) {
	std::cout	<< "ScavTrap "
				<< this->getName()
				<< " can't use sorcery.... "
				<< target
				<< " is unharmed....\n"
				<< "For that reason ScavTrap "
				<< this->getName()
				<< " takes 10 auxilary damage..\n";
	this->takeDamage(10);
}

void ScavTrap::rangedChallenge(void) {
	std::cout << "ScavTrap " + this->getName() + " challenges newcomer for archery. Contestant will have to shoot an arrow into an apple which will be placed on the head of zergling. (Yes, StarCraf)" << '\n';
}
void ScavTrap::meleeChalenge(void) {
	std::cout << "ScavTrap " + this->getName() + " challenges newcomer for hand to hand battle. Contestant will have to beat the plush toy to its finest vzbitie" << '\n';
}
void ScavTrap::physicalChallenge(void) {
	std::cout << "ScavTrap " + this->getName() + " challenges newcomer for has to demosntrate strenght and agility, thus Contestant will jump over sleeping beauty and them make her wake up." << '\n';
}
void ScavTrap::screamChallenge(void) {
	std::cout << "ScavTrap " + this->getName() + " challenges newcomer for scream as hard as contestant can. What tp scream we will tell you :)" << '\n';
}
void ScavTrap::sourceryChallenge(void) {
	std::cout << "ScavTrap " + this->getName() + " challenges newcomer for creating an frog-sickle, cause defender is thursty." << '\n';
}

void ScavTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	if (this->hitPoints < 0) {
		std::cout	<< "ScavTrap "
					<< this->getName()
					<< " is dead...\n";
		this->hitPoints = 0;
	}
	else {
		std::cout	<< "ScavTrap "
					<< this->getName()
					<< " got backstabed by "
					<< amount
					<< " hitpoints, causing "
					<< this->hitPoints
					<< "slight fatigue in our hero!"
					<< "\nCurrent leve of hit points: "
					<< this->getHitPoints()
					<< '\n';
	}
}
void ScavTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	this->energyPoints += amount;
	if (this->hitPoints > this->getMaxHitPoints()) {
		this->hitPoints = this->getMaxHitPoints();
	}
	if (this->energyPoints > this->getMaxEnergyPoints())
		this->energyPoints = this->getMaxEnergyPoints();
	std::cout	<< "ScavTrap "
				<< this->getName()
				<< " got suddenly healed by random witch for "
				<< amount
				<< " hitpoints, causing "
				<< ((this->hitPoints < this->maxHitPoints) ?
					"hero to feel better and ready to fight!" : "honestly nothing, cause you are full of hit points, go lose some")
				<< "\nThis witch also tried to restore manna and "
				<< ((this->energyPoints < this->maxEnergyPoints) ?
					"it was greatly appriciated. Hero you are ready!" : "NOTHING ^_^ You are full of energy, go fight")
				<< '\n';
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
		"meleeChalenge",
		"rangedChallenge",
		"physicalChallenge",
		"screamChallenge",
		"sourceryChallenge"
	};
	(this->*(funcs[rand() % 5]))();
}
