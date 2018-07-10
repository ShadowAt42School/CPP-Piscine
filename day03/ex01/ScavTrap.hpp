/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 01:09:03 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

class ScavTrap {
	typedef void (ScavTrap::*Atack)(std::string const & target);
	typedef void (ScavTrap::*Action)(unsigned int amount);
	typedef void (ScavTrap::*Challenge)(void);
private:
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	std::string name;
	int meleeAttackDmg;
	int rangedAttackDmg;
	int armorDmgRed;

	ScavTrap ();

public:
	ScavTrap (std::string name = "Default");
	ScavTrap (ScavTrap const & src);
	virtual ~ScavTrap (void);
	ScavTrap & operator=(ScavTrap const & rhs);

	void setName(std::string name);

	std::string getName() const;
	int getHitPoints() const;
	int getMaxHitPoints() const;
	int getEnergyPoints() const;
	int getMaxEnergyPoints() const;
	int getLevel() const;
	int getMeleeAttackDmg() const;
	int getRangedAttackDmg() const;
	int getArmorDmgRed() const;

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void poisonAttack(std::string const & target);
	void screamAttack(std::string const & target);
	void sourcererAttack(std::string const & target);

	void rangedChallenge(void);
	void meleeChalenge(void);
	void physicalChallenge(void);
	void screamChallenge(void);
	void sourceryChallenge(void);

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void challengeNewcomer(void);
};
