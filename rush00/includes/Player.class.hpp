/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 15:14:01 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 14:35:12 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_CLASS_HPP
# define PLAYER_CLASS_HPP

#include "IShip.interface.hpp"

class Player {
private:
	IShip *ship;
	int score;
	Player ();

public:
	Player (IShip *ship);
	Player (Player const & src);
	virtual ~Player ();

	int getScore() const;
	IShip * getShip() const;

	Player & operator=(Player const & rhs);
};

#endif
