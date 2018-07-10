/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Board.system.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:03:17 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 23:31:21 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOARD_SYSTEM_CLASS_HPP
# define BOARD_SYSTEM_CLASS_HPP

#include <ncurses.h>
#include "IShip.interface.hpp"
#include "IBullet.interface.hpp"
#include "Engenium.ship.class.hpp"
#include <ctime>

class Board {
private:
	WINDOW *win;
	int winMaxX;
	int winMaxY;
	IShip *playerShip;
	int *score;
	IShip *enemyShip[20];
	IBullet *bullets[100];
	int bulletCount;
	int tEnemyCount;
	int enemyCount;
	int enemyOn;
	Board ();

public:
	Board(WINDOW *win, int y, int x, IShip *playerShip);
	Board (Board const & src);
	virtual ~Board ();

	int getWinMaxX(void) const;
	int getWinMaxY(void) const;

	Board & operator=(Board const & rhs);

	void init(void);
	void wRefresh(void);
	void eventPlayerMoveUp(int);
	void eventPlayerMoveDown(int);
	void eventPlayerMoveLeft(int);
	void eventPlayerMoveRight(int);
	void eventPlayerFire(void);

	void enemySpawn(int);
	void moveWorld();
	void cleanUp();
	void checkCollisions();
};

#endif
