/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 16:16:42 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 19:51:38 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <random>

class Zombie {
private:
	std::string name;
	std::string type;

public:
	Zombie (void);
	void genZombie (std::string type = "BasicDefaultType");
	void setName(std::string name);
	void setType(std::string type);
	std::string getName();
	std::string getType();
	void announce();
	virtual ~Zombie ();
};
