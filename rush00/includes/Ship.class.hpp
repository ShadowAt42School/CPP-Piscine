/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ship.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:19:14 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 15:07:40 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHIP_CLASS_HPP
# define SHIP_CLASS_HPP

#include <string>
#include "IWeapon.interface.hpp"

class Ship {
private:

protected:
	std::string name;
	std::string type;
	int lives;
	int health;
	int pointsCost;
	IWeapon *weapons[10];
	IWeapon *weaponEquiped;
	int weaponCount;

public:
	Ship ();
	Ship (bool);
	Ship (Ship const & src);
	~Ship ();

	std::string getName(void) const;
	std::string getType(void) const;
	int getLives() const;
	int getHealth() const;
	int getPointsCost() const;
	int getWeaponCount() const;
	IWeapon *getWeapon(int) const;
	IWeapon* getEquipedWeapon() const;

	Ship & operator=(Ship const & rhs);

	bool isAlive(void) const;
	bool isRespawn(void) const;
	bool isWeaponEquiped() const;

};

#endif
