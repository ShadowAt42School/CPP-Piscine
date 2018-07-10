/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IBullet.interface.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 06:00:19 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 17:15:39 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IBULLET_INTERFACE_HPP
# define IBULLET_INTERFACE_HPP

#include "Bullet.class.hpp"
#include "IBoundingBox.interface.hpp"

class IBullet : public Bullet, virtual public IBoundingBox {
public:
	IBullet(int damage, std::string type) : Bullet(damage, type) {}
	virtual ~IBullet () {};
	virtual IBullet* clone() const = 0;
	virtual void move(int, int) = 0;
	virtual void autoMove(int, int) = 0;
	virtual void fire(int, int, bool) = 0;
	virtual void collisionCheck() = 0;
};
#endif
