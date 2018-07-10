/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.system.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 03:40:39 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 23:00:31 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_SYSTEM_CLASS_HPP
# define GAME_SYSTEM_CLASS_HPP

#include <cstdio>
#include <unistd.h>
#include <ncurses.h>
#include <ctime>
#include <cstdlib>
#include "Board.system.class.hpp"
#include "Player.class.hpp"
#include "Engenium.ship.class.hpp"

# define FRAMES_PER_SECOND 60
# define CLOCKS_PER_FRAME (CLOCKS_PER_SEC / FRAMES_PER_SECOND)

class Game {
private:
	enum states {WELCOME, GAME, PAUSE, GAMEOVER};
	WINDOW *win;
	Player *player;
	Board *board;
	FILE *log;
	states state;
	int fps;
	int time;
	int clockPerSec;
	int spawnTimer;
	int spawnTime;
	int maxWinX;
	int maxWinY;
	Game();

public:
	Game (WINDOW*);
	Game (Game const & src);
	virtual ~Game ();

	Player & getPlayer(void) const;
	Board & getBoard(void) const;
	WINDOW* getWin(void) const;

	Game & operator=(Game const & rhs);

	void play();
	void handleKeyPress(int key);

	void spawnEnemy();

	void draw();
};

#endif
