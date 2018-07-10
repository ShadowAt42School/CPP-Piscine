/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Engenium.ship.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:24:02 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 23:14:12 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGENIUM_SHIP_CLASS_HPP
# define ENGENIUM_SHIP_CLASS_HPP

#include "IShip.interface.hpp"
#include "RailGun.class.hpp"

class Engenium : public IShip {
private:
	Engenium ();

public:
	Engenium (int, int, int, int, WINDOW*);
	Engenium (Engenium const & src);
	virtual ~Engenium ();

	IShip* clone() const;
	Engenium & operator=(Engenium const & rhs);

	bool canShoot(void) const;
	IBullet * fire(bool) const;
	void takeDamage(int);
	void draw(int);
	void autoMove(int, int);
};

#endif
