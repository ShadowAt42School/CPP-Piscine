/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:25:39 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:51:03 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
private:
	std::string name;
	int ap;
	AWeapon *weapon;

	Character();

public:
	Character(std::string const & name);
	Character (Character const & src);
	virtual ~Character ();

	std::string getName(void) const;
	int getAp(void) const;
	AWeapon * getWeapon(void) const;

	Character & operator=(Character const & rhs);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
};

std::ostream & operator<<(std::ostream& o, Character const & character);

#endif
