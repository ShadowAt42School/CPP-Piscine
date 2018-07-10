/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.system.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 03:40:39 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/02 20:09:03 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.system.class.hpp"

Game::Game(WINDOW *win) {
	this->win = win;
	keypad(this->win, true);
	nodelay(this->win, true);
	box(this->win, 0, 0);
	wrefresh(this->win);
	this->state = GAME;
	this->fps = FRAMES_PER_SECOND;
	this->time = 0;
	this->clockPerSec = CLOCKS_PER_SEC;
	this->spawnTimer = 0;

	getmaxyx(this->win, this->maxWinY, this->maxWinX);

	WINDOW *game_window = newwin(this->maxWinY - 2, this->maxWinX - 2, 1, 1);
	this->player = new Player(new Engenium(0, 0, 10, 5, game_window));
	this->board = new Board(game_window, this->maxWinY - 2, this->maxWinX - 2, this->player->getShip());
	this->draw();
}

Game::Game (Game const & src) {
	*this = src;
	return;
}
Game::~Game() {
	delete this->board;
}

Player & Game::getPlayer() const {	return *this->player;	}
Board & Game::getBoard() const {	return *this->board;	}
WINDOW * Game::getWin() const {	return this->win;	}

Game & Game::operator=(const Game &rhs) {
	if (this != &rhs) {
		*this->board = rhs.getBoard();
		this->win = rhs.getWin();
		*this->player = rhs.getPlayer();
	}
	return *this;
}

void Game::play() {
	int frames = 0;
	clock_t before = clock();
	clock_t now;
	this->spawnTime = rand() % 2 + 1;

	while (this->state == GAME) {
		int key = -1;
		key = wgetch(this->win);
		if (key != -1)
			this->handleKeyPress(key);

		this->spawnEnemy();
		this->draw();
		// CALCULATE TIME AND FPS
		now = clock();
		frames++;
		if (((now - before) / this->clockPerSec) == 1) // 1 second elapsed
		{
			this->time++;
			this->spawnTimer++;
			before = now;
			this->fps = frames;
			frames = 0;
		}

		// WAIT FOR REST OF 1/60th OF SECOND (or 1/fps'th of a second)
		while(clock() / CLOCKS_PER_FRAME == now / CLOCKS_PER_FRAME) {}
        //
	}
}

void	Game::spawnEnemy() {
	if (this->spawnTime == this->spawnTimer) {
		this->spawnTimer = 0;
		this->spawnTime = rand() % 2 + 1;
		this->board->enemySpawn(1);
	}
}

void Game::draw() {
	mvwprintw(this->win, this->maxWinY - 1, 5, "FPS: %d", this->fps);
	mvwprintw(this->win, this->maxWinY - 1, 29, "TIME: %0.2d:%0.2d", this->time / 60, this->time%60);
	mvwprintw(this->win, this->maxWinY - 1, 40, "SCORE: %d", this->player->getScore());
	mvwprintw(this->win, this->maxWinY - 1, 65, "LIVES: %d", this->player->getShip()->getLives());
	mvwprintw(this->win, this->maxWinY - 1, 95, "HEALTH: %d", this->player->getShip()->getHealth());
	this->board->wRefresh();
	wnoutrefresh(this->win);
	doupdate();
	// usleep(30000);
}

void Game::handleKeyPress(int key) {
	switch (key) {
		case KEY_UP:
			this->board->eventPlayerMoveUp(1);
		break;
		case KEY_DOWN:
			this->board->eventPlayerMoveDown(1);
		break;
		case KEY_LEFT:
			this->board->eventPlayerMoveLeft(1);
		break;
		case KEY_RIGHT:
			this->board->eventPlayerMoveRight(1);
		break;
		case ' ':
			this->board->eventPlayerFire();
		break;
	}
}
