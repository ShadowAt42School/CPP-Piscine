/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:51:04 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 20:47:29 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon{
private:
	std::string sound;

public:
	PowerFist();
	PowerFist(PowerFist const & src);
	virtual ~PowerFist ();

	std::string getSound() const;

	PowerFist & operator=(PowerFist const & rhs);

	void attack() const;
};

#endif
