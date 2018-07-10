/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 01:20:21 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 13:41:03 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default parent constructor called" << '\n';
	return;
}
ClapTrap::~ClapTrap(void) {
	std::cout << "Parent Destructor called" << '\n';
	return;
}
ClapTrap & ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "Parent Assignation called" << '\n';
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

void ClapTrap::setName(std::string name) {
	this->name = name;
}

std::string ClapTrap::getName() const {
	return this->name;
}
int ClapTrap::getHitPoints() const {
	return this->hitPoints;
}
int ClapTrap::getMaxHitPoints() const {
	return this->maxHitPoints;
}
int ClapTrap::getEnergyPoints() const {
	return this->energyPoints;
}
int ClapTrap::getMaxEnergyPoints() const {
	return this->maxEnergyPoints;
}
int ClapTrap::getLevel() const {
	return this->level;
}
int ClapTrap::getMeleeAttackDmg() const {
	return this->meleeAttackDmg;
}
int ClapTrap::getRangedAttackDmg() const {
	return this->rangedAttackDmg;
}
int ClapTrap::getArmorDmgRed() const {
	return this->armorDmgRed;
}

void ClapTrap::rangedAttack(std::string const & target) {
	std::cout	<< this->getName()
				<< " attacks alone and single handedly crushed the skull of Big "
				<< target
				<< " at range, causing "
				<< this->getMeleeAttackDmg()
				<< " points of damage !" << '\n';
}
void ClapTrap::meleeAttack(std::string const & target) {
	std::cout	<< this->getName()
				<< " attacks using long bow, while "
				<< target
				<< " is peeing, causing "
				<< this->getRangedAttackDmg()
				<< " points of damage !" << '\n';
}
void ClapTrap::poisonAttack(std::string const & target) {
	std::cout	<< this->getName()
				<< " attacks using poison that was bestoyed upon him on "
				<< target
				<< " and evaporating "
				<< this->getMeleeAttackDmg()
				<< " points of damage !" << '\n';
}
void ClapTrap::screamAttack(std::string const & target) {
	std::cout	<< this->getName()
				<< " screams at "
				<< target
				<< " for not throwing away trash, causing "
				<< this->getRangedAttackDmg()
				<< " points of damage !" << '\n';
}
void ClapTrap::sourcererAttack(std::string const & target) {
	std::cout	<< this->getName()
				<< " waves his hands and "
				<< target
				<< " is burning alive O_O, causing "
				<< this->getRangedAttackDmg()
				<< " points of damage !" << '\n';
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	if (this->hitPoints < 0) {
		std::cout	<< this->getName()
					<< " is dead...\n";
		this->hitPoints = 0;
	}
	else {
		std::cout	<< this->getName()
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
void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	this->energyPoints += amount;
	if (this->hitPoints > this->getMaxHitPoints()) {
		this->hitPoints = this->getMaxHitPoints();
	}
	if (this->energyPoints > this->getMaxEnergyPoints())
		this->energyPoints = this->getMaxEnergyPoints();
	std::cout	<< this->getName()
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
