/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 00:54:15 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

class FragTrap {
	typedef void (FragTrap::*Atack)(std::string const & target);
	typedef void (FragTrap::*Action)(unsigned int amount);
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

	FragTrap ();

public:
	FragTrap (std::string name = "Default");
	FragTrap (FragTrap const & src);
	virtual ~FragTrap (void);
	FragTrap & operator=(FragTrap const & rhs);

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
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void vaulthunter_dot_exe(std::string const & target);
};
