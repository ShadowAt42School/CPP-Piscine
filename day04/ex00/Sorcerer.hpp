/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:01:19 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 18:03:23 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
private:
	std::string name;
	std::string title;

	Sorcerer();

public:
	Sorcerer (std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	virtual ~Sorcerer ();

	void setName(std::string);
	void setTitle(std::string);
	std::string getName(void) const;
	std::string getTitle(void) const;

	Sorcerer & operator=(Sorcerer const &rhs);

	void polymorph(Victim const &) const;
};

std::ostream & operator<<(std::ostream& o, Sorcerer const & sorcerer);

#endif
