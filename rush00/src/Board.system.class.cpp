/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Board.system.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:03:19 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 23:40:10 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Board.system.class.hpp"

Board::Board() {
}
Board::Board(WINDOW *win, int y, int x, IShip *playerShip) {
	this->win = win;
	this->winMaxY = y;
	this->winMaxX = x;
	this->playerShip = playerShip;

	this->bulletCount = 100;

	this->tEnemyCount = 100;
	this->enemyCount = 20;
	this->init();
	return;
}
Board::Board (Board const & src) {
	*this = src;
	return;
}
Board::~Board() {
}
Board & Board::operator=(Board const & rhs) {
	if (this != &rhs) {
	}
	return *this;
}
void Board::init() {
	this->playerShip->draw(1);
	wnoutrefresh(this->win);
	for (int i = 0; i < this->enemyCount; i++)
		this->enemyShip[i] = NULL;
	for (int i = 0; i < this->bulletCount; i++)
		this->bullets[i] = NULL;
}

void Board::wRefresh() {
	wclear(this->win);
	this->playerShip->draw(1);
	this->moveWorld();
	this->checkCollisions();
	this->cleanUp();
	wnoutrefresh(this->win);
}


void Board::moveWorld() {
	for (int i = 0; i < this->enemyCount; i++) {
		if (!this->enemyShip[i] || this->enemyShip[i] == NULL)
			continue;
		this->enemyShip[i]->autoMove(-1, 1);
	}
	for (int i = 0; i < this->bulletCount; i++) {
		if (!this->bullets[i] || this->bullets[i] == NULL)
			continue;
		this->bullets[i]->autoMove(1, 1);
	}
}

void Board::cleanUp() {
	for (int i = 0; i < this->enemyCount; i++) {
		if (!this->enemyShip[i] || this->enemyShip[i] == NULL)
			continue;
		if (this->enemyShip[i]->getCurX() > this->winMaxX || this->enemyShip[i]->getCurX() < 0 ||
			this->enemyShip[i]->getCurY() > this->winMaxY || this->enemyShip[i]->getCurY() < 0 ||
			!this->enemyShip[i]->isAlive()) {
			delete this->enemyShip[i];
			this->enemyShip[i] = NULL;
			this->enemyOn--;
		}
	}
	for (int i = 0; i < this->bulletCount; i++) {
		if (!this->bullets[i] || this->bullets[i] == NULL)
			continue;
		if (this->bullets[i]->getCurX() > this->winMaxX || this->bullets[i]->getCurX() < 0 ||
			this->bullets[i]->getCurY() > this->winMaxY || this->bullets[i]->getCurY() < 0) {
			delete this->bullets[i];
			this->bullets[i] = NULL;
		}
	}
}

void Board::enemySpawn(int number) {
	if (this->enemyOn == 20)
		return ;
	int g = 0;
	for (int i = 0; i < this->enemyCount; i++) {
		while (g < number) {
			if (!this->enemyShip[i] || this->enemyShip[i] == NULL) {
				this->enemyShip[i] = new Engenium(
					std::rand() % (this->winMaxY - 10) + 3,
					this->winMaxX - 1,
					3,
					3,
					this->win
				);
				this->enemyShip[i++]->draw(-1);
				this->enemyOn++;
				this->tEnemyCount--;
				g++;
			}
		}
	}
}

void Board::checkCollisions() {
	for (int i = 0; i < this->bulletCount; i++) {
		if (!this->bullets[i] || this->bullets[i] == NULL)
			continue;
		for (int g = 0; g < this->enemyCount; g++) {
			if (!this->enemyShip[g] || this->enemyShip[g] == NULL)
				continue;
			if (
				(
					(this->enemyShip[g]->getCurY() >= this->bullets[i]->getCurY() &&
					this->enemyShip[g]->getCurY() + this->enemyShip[g]->getHeight() <= this->bullets[i]->getCurY()) &&
					(this->enemyShip[g]->getCurX() >= this->bullets[i]->getCurX() &&
					this->enemyShip[g]->getCurX() + this->enemyShip[g]->getLength() <= this->bullets[i]->getCurX())
				) &&
				this->enemyShip[g]->isAlive()) {
				this->enemyShip[g]->takeDamage(this->playerShip->getEquipedWeapon()->getDamage());
				this->score += this->enemyShip[g]->getPointsCost();
				delete this->enemyShip[g];
				this->enemyShip[g] = NULL;

			}
		}
	}
	for (int g = 0; g < this->enemyCount; g++) {
		if (!this->enemyShip[g] || this->enemyShip[g] == NULL)
			continue;
		if (
			(
				(this->enemyShip[g]->getCurY() >= this->playerShip->getCurY() &&
				this->enemyShip[g]->getCurY() + this->enemyShip[g]->getHeight() <= this->playerShip->getCurY()) &&
				(this->enemyShip[g]->getCurX() >= this->playerShip->getCurX() &&
				this->enemyShip[g]->getCurX() + this->enemyShip[g]->getLength() <= this->playerShip->getCurX())
			) &&
			this->enemyShip[g]->isAlive()) {
			this->playerShip->takeDamage(100);
			this->enemyShip[g]->takeDamage(100);
		}
	}

}

void Board::eventPlayerMoveUp(int dist) {
	if (this->playerShip->getCurY() - dist <= 0)
		return;
	this->playerShip->moveUp(dist);
}
void Board::eventPlayerMoveDown(int dist) {
	if (this->playerShip->getCurY() + dist >= this->winMaxY)
		return;
	this->playerShip->moveDown(dist);
}
void Board::eventPlayerMoveLeft(int dist) {
	if (this->playerShip->getCurX() - dist <= 0)
		return;
	this->playerShip->moveLeft(dist);
}
void Board::eventPlayerMoveRight(int dist) {
	if (this->playerShip->getCurX() + dist >= this->winMaxX)
		return;
	this->playerShip->moveRight(dist);
}
void Board::eventPlayerFire(void) {
	for (int i = 0; i < this->bulletCount; i++) {
		if (!this->bullets[i] || this->bullets[i] == NULL) {
			this->bullets[i] = this->playerShip->fire(true);
			break;
		}
	}
	return ;
}
