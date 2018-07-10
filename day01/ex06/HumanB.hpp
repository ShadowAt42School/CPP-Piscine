/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 12:56:11 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 14:22:37 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB {
private:
	Weapon* weapon;
	std::string name;

public:
	HumanB (std::string name);
	HumanB (std::string name, Weapon weapon);
	void setWeapon(Weapon& weapon);
	void attack();
	virtual ~HumanB ();
};

#endif
