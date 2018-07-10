/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IShip.interface.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:12:13 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 18:21:40 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISHIP_INTERFACE_HPP
# define ISHIP_INTERFACE_HPP

#include "Ship.class.hpp"
#include "IBoundingBox.interface.hpp"

class IShip : public Ship, virtual public IBoundingBox {

public:
	virtual ~IShip () {};
	virtual IShip* clone() const = 0;
	virtual bool canShoot(void) const = 0;
	virtual IBullet * fire(bool) const = 0;
	virtual void takeDamage(int) = 0;
	virtual void autoMove(int, int) = 0;
};

#endif
