/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 21:22:58 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/30 22:53:22 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
private:
	std::string bCry;
	TacticalMarine & operator=(TacticalMarine const & rhs);

public:
	TacticalMarine ();
	TacticalMarine(TacticalMarine const & src);
	virtual ~TacticalMarine ();

	std::string getBCry(void) const;

	TacticalMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
