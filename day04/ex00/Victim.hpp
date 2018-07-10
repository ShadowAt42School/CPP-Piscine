/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 16:01:19 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 18:19:18 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim {
private:
	std::string name;

	Victim();

public:
	Victim (std::string name);
	Victim(Victim const & src);
	virtual ~Victim ();

	void setName(std::string);
	std::string getName(void) const;

	Victim & operator=(Victim const &rhs);

	virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream& o, Victim const & sorcerer);

#endif
