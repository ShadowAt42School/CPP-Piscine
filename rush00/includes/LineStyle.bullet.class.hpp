/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LineStyle.bullet.class.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 06:13:44 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 19:47:55 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINESTYLE_BULLET_CLASS_HPP
# define LINESTYLE_BULLET_CLASS_HPP

#include "IBullet.interface.hpp"

class LineStyle : public IBullet {
private:
	bool isUser;
	LineStyle();

public:
	LineStyle (int damage, std::string type, WINDOW *win);
	LineStyle (LineStyle const & src);
	virtual ~LineStyle ();

	LineStyle & operator=(LineStyle const & rhs);
	IBullet* clone() const;
	void move(int direction, int amount);
	void autoMove(int, int);
	void fire(int, int, bool);
	void collisionCheck();

	void draw(int);
};

#endif
