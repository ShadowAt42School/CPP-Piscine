/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 13:24:17 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
	this->name = name;
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDmg = 30;
	this->rangedAttackDmg = 20;
	this->armorDmgRed = 5;
	std::cout << "Default constructor called" << '\n';
	srand (time(NULL));
	return;
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "Copy constructor called" << '\n';
	*this = src;
	return;
}
FragTrap::~FragTrap(void) {
	std::cout << "Destructor called" << '\n';
	return;
}
FragTrap & FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "Assignation called" << '\n';
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

void FragTrap::setName(std::string name) {
	this->name = name;
}

std::string FragTrap::getName() const {
	return this->name;
}
int FragTrap::getHitPoints() const {
	return this->hitPoints;
}
int FragTrap::getMaxHitPoints() const {
	return this->maxHitPoints;
}
int FragTrap::getEnergyPoints() const {
	return this->energyPoints;
}
int FragTrap::getMaxEnergyPoints() const {
	return this->maxEnergyPoints;
}
int FragTrap::getLevel() const {
	return this->level;
}
int FragTrap::getMeleeAttackDmg() const {
	return this->meleeAttackDmg;
}
int FragTrap::getRangedAttackDmg() const {
	return this->rangedAttackDmg;
}
int FragTrap::getArmorDmgRed() const {
	return this->armorDmgRed;
}

void FragTrap::rangedAttack(std::string const & target) {
	std::cout	<< "FR4G-TP "
				<< this->getName()
				<< " attacks alone and single handedly crushed the skull of Big "
				<< target
				<< " at range, causing "
				<< this->getMeleeAttackDmg()
				<< " points of damage !" << '\n';
}
void FragTrap::meleeAttack(std::string const & target) {
	std::cout	<< "FR4G-TP "
				<< this->getName()
				<< " attacks using long bow, while "
				<< target
				<< " is peeing, causing "
				<< this->getRangedAttackDmg()
				<< " points of damage !" << '\n';
}
void FragTrap::poisonAttack(std::string const & target) {
	std::cout	<< "FR4G-TP "
				<< this->getName()
				<< " attacks using poison that was bestoyed upon him on "
				<< target
				<< " and evaporating "
				<< this->getMeleeAttackDmg()
				<< " points of damage !" << '\n';
}
void FragTrap::screamAttack(std::string const & target) {
	std::cout	<< "FR4G-TP "
				<< this->getName()
				<< " screams at "
				<< target
				<< " for not throwing away trash, causing "
				<< this->getRangedAttackDmg()
				<< " points of damage !" << '\n';
}
void FragTrap::sourcererAttack(std::string const & target) {
	std::cout	<< "FR4G-TP "
				<< this->getName()
				<< " waves his hands and "
				<< target
				<< " is burning alive O_O, causing "
				<< this->getRangedAttackDmg()
				<< " points of damage !" << '\n';
}

void FragTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	if (this->hitPoints < 0) {
		std::cout	<< "FR4G-TP "
					<< this->getName()
					<< " is dead...\n";
		this->hitPoints = 0;
	}
	else {
		std::cout	<< "FR4G-TP "
					<< this->getName()
					<< " got backstabed and "
					<< amount
					<< " hitpoints, causing "
					<< "slight fatigue in our hero!"
					<< "\nCurrent level of hit points: "
					<< this->getHitPoints()
					<< '\n';
	}
}
void FragTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	this->energyPoints += amount;
	if (this->hitPoints > this->getMaxHitPoints())
		this->hitPoints = this->getMaxHitPoints();
	if (this->energyPoints > this->getMaxEnergyPoints())
		this->energyPoints = this->getMaxEnergyPoints();
	std::cout	<< "FR4G-TP "
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
