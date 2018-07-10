/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 21:22:58 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/30 22:53:33 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
private:
	std::string bCry;
	AssaultTerminator & operator=(AssaultTerminator const & rhs);
public:
	AssaultTerminator ();
	AssaultTerminator(AssaultTerminator const & src);
	virtual ~AssaultTerminator ();

	std::string getBCry(void) const;

	AssaultTerminator* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
