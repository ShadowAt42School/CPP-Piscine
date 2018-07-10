/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:01:19 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 18:19:55 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
private:
	std::string name;

	Peon();

public:
	Peon (std::string name);
	Peon(Peon const & src);
	virtual ~Peon ();

	void setName(std::string);
	std::string getName(void) const;

	Peon & operator=(Peon const &rhs);

	virtual void getPolymorphed() const;
};

#endif
