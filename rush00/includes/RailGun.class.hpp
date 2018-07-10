/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RailGun.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 20:57:20 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 19:43:58 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAILGUN_CLASS_HPP
# define RAILGUN_CLASS_HPP

#include "IWeapon.interface.hpp"
#include "LineStyle.bullet.class.hpp"

class RailGun : public IWeapon {
private:
	RailGun ();

public:
	RailGun (int, int, WINDOW * win);
	RailGun (RailGun const & src);
	virtual ~RailGun ();

	IWeapon* clone() const;
	RailGun & operator=(RailGun const & rhs);

	IBullet * fire(bool) const;

	void draw(int);
};

#endif
