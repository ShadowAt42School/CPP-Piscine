/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:37:35 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 21:14:06 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <time.h>
#include "Zombie.hpp"

class ZombieEvent {
private:
	/* data */

public:
	std::string zType;

	ZombieEvent (void);
	Zombie* newZombie(std::string name = "BasicDefaultName") ;
	void setZombieType(std::string type = "BasicDefaultTypeZombieEvent");
	void randomChump();
	void randomChumpDefaultType();
	virtual ~ZombieEvent ();
};
