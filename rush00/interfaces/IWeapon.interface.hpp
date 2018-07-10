/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IWeapon.interface.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:50:49 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 15:07:17 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IWEAPON_INTERFACE_HPP
# define IWEAPON_INTERFACE_HPP

#include "Weapon.class.hpp"
#include "IBoundingBox.interface.hpp"
#include "IBullet.interface.hpp"

class IWeapon : public Weapon, virtual public IBoundingBox {
	public:
		virtual ~IWeapon () {};
		virtual IWeapon* clone() const = 0;
		virtual IBullet * fire(bool) const = 0;
};

#endif
