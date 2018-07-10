/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BoundingBox.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 19:32:01 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 23:38:16 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOUNDINGBOX_CLASS_HPP
# define BOUNDINGBOX_CLASS_HPP

#include <ncurses.h>

class BoundingBox {
private:
	WINDOW *wincp;
	BoundingBox();

protected:
	int x;
	int y;
	int lenght;
	int height;
	int represent;
	void setX(int x);
	void setY(int y);
	void setLength(int length);
	void setHeight(int height);
	void setRepresent(int represent);
	WINDOW *getWin(void) const;

public:
	BoundingBox(WINDOW*);
	BoundingBox (BoundingBox const & src);
	virtual ~BoundingBox ();
	BoundingBox & operator=(BoundingBox const & rhs);

	int getCurX(void) const;
	int getCurY(void) const;
	int getLength(void) const;
	int getHeight(void) const;
	void moveUp(int);
	void moveDown(int);
	void moveLeft(int);
	void moveRight(int);
	void move(int, int);
	void draw();

};

#endif
