/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 01:49:17 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 14:27:58 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name): FragTrap(name), NinjaTrap(name) {
	std::cout << "SuperTrap constructor called" << '\n';
	this->name = name;
	this->hitPoints = FragTrap::getHitPoints();
	this->maxHitPoints = FragTrap::getMaxEnergyPoints();
	this->energyPoints = NinjaTrap::getEnergyPoints();
	this->maxEnergyPoints = NinjaTrap::getMaxEnergyPoints();
	this->level = 1;
	this->meleeAttackDmg = NinjaTrap::getMeleeAttackDmg();
	this->rangedAttackDmg = NinjaTrap::getRangedAttackDmg();
	this->armorDmgRed = FragTrap::getArmorDmgRed();
	return;
}

SuperTrap::SuperTrap(SuperTrap const & src) : FragTrap(src), NinjaTrap(src) {
	std::cout << "SuperTrap copy constructor called" << '\n';
	*this = src;
	return;
}

SuperTrap::~SuperTrap(void) {
	std::cout << "SuperTrap Destructor called" << '\n';
	return;
}
SuperTrap & SuperTrap::operator=(SuperTrap const &rhs) {
	std::cout << "SuperTrap Assignation called" << '\n';
	FragTrap::operator=(rhs);
	return *this;
}

void SuperTrap::meleeAttack(const std::string &target) {
	std::cout << "SuperTrap attacks" << '\n';
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(const std::string &target) {
	std::cout << "SuperTrap attacks" << '\n';
	FragTrap::rangedAttack(target);
}

void SuperTrap::vaulthunter_dot_exe(std::string const & target) {
	FragTrap::vaulthunter_dot_exe(target);
}
void SuperTrap::ninjaShoebox(FragTrap &fragtrap) {
	NinjaTrap::ninjaShoebox(fragtrap);
}
void SuperTrap::ninjaShoebox(ScavTrap &scavtrap) {
	NinjaTrap::ninjaShoebox(scavtrap);
}
void SuperTrap::ninjaShoebox(NinjaTrap &ninjatrap) {
	NinjaTrap::ninjaShoebox(ninjatrap);
}
