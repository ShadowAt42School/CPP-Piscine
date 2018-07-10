/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 01:16:27 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 01:36:22 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	private:

	protected:
		typedef void (ClapTrap::*Atack)(std::string const & target);
		typedef void (ClapTrap::*Action)(unsigned int amount);
		int hitPoints;
		int maxHitPoints;
		int energyPoints;
		int maxEnergyPoints;
		int level;
		std::string name;
		int meleeAttackDmg;
		int rangedAttackDmg;
		int armorDmgRed;

	public:
		ClapTrap ();
		ClapTrap (ClapTrap const & src);
		virtual ~ClapTrap (void);
		ClapTrap & operator=(ClapTrap const & rhs);

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
};

#endif
