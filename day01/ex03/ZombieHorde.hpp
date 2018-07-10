/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 17:21:21 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 19:51:39 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieHorde {
private:
	Zombie *list;
	int count;

public:
	ZombieHorde (int count);
	void announce();
	virtual ~ZombieHorde ();
};
