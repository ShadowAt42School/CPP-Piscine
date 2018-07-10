/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 12:15:41 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 14:17:52 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
private:
	std::string type;

public:
	Weapon (std::string type = "Default");
	std::string const & getType();
	void setType(std::string type);
	virtual ~Weapon ();
};

#endif
