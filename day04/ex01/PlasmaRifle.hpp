/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:51:04 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:47:22 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
private:
	std::string sound;

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & src);
	virtual ~PlasmaRifle ();

	std::string getSound() const;

	PlasmaRifle & operator=(PlasmaRifle const & rhs);

	void attack() const;
};

#endif
