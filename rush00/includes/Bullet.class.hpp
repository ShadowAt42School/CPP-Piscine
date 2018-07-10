/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 05:52:14 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/01 14:44:29 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_CLASS_HPP
# define BULLET_CLASS_HPP

#include <string>

class Bullet {
protected:
	std::string type;
	int	damage;
	bool isPlayer;
	Bullet ();

public:
	Bullet (int damage, std::string type);
	Bullet (Bullet const & src);
	virtual ~Bullet ();

	void setPlayerPtr(bool);
	int getDamage(void) const;
	std::string getType(void) const;
	bool getPlayerPtr(void) const;

	Bullet & operator=(Bullet const & rhs);
};

#endif
