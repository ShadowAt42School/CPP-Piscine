/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:39:13 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:24:14 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon {
private:
	std::string name;
	int apcost;
	int damage;

	AWeapon ();

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & src);
	virtual ~AWeapon ();

	std::string virtual getName() const;
	int getAPCost() const;
	int getDamage() const;

	AWeapon & operator=(AWeapon const & rhs);

	virtual void attack() const = 0;
};

#endif
