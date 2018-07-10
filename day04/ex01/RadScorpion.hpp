/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 20:21:41 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:25:14 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {
private:


public:
	RadScorpion ();
	RadScorpion (RadScorpion const & src);
	virtual ~RadScorpion ();

	RadScorpion & operator=(RadScorpion const & rhs);

	void takeDamage(int);
};

#endif
