/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:09:08 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/30 22:19:19 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy {
private:
	Enemy();

protected:
	int hp;
	std::string type;

public:
	Enemy (int hp, std::string const & type);
	Enemy (Enemy const & src);
	virtual ~Enemy ();

	std::string virtual getType() const;
	int getHP() const;

	Enemy & operator=(Enemy const & rhs);

	virtual void takeDamage(int) = 0;
};

std::ostream & operator<<(std::ostream& o, Enemy const & character);

#endif
