/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 12:56:11 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 14:33:10 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
private:
	Weapon* weapon;
	std::string name;

public:
	HumanA (std::string name);
	HumanA (std::string name, Weapon& weapon);
	void setWeapon(Weapon& weapon);
	void attack();
	virtual ~HumanA ();
};

#endif
