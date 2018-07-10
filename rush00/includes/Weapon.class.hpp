/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:23:04 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 07:07:02 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <string>

class Weapon {
protected:
	int damage;
	int numBullets;
	bool splash;

public:
	Weapon ();
	Weapon (Weapon const & src);
	~Weapon ();

	void setDamage(int);
	void setNumBullets(int);
	void setSplash(bool);
	int getDamage(void) const;
	int getNumBullets(void) const;
	bool getSplash(void) const;

	Weapon & operator=(Weapon const & rhs);

	bool canShoot(void) const;
};

#endif
