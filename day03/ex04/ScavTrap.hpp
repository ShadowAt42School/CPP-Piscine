/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 01:37:21 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	typedef void (ScavTrap::*Challenge)(void);
	private:
		ScavTrap ();

	public:
		ScavTrap (std::string name = "Default");
		ScavTrap (ScavTrap const & src);
		virtual ~ScavTrap (void);
		ScavTrap & operator=(ScavTrap const & rhs);

		void rangedChallenge(void);
		void meleeChalenge(void);
		void physicalChallenge(void);
		void screamChallenge(void);
		void sourceryChallenge(void);

		void challengeNewcomer(void);
};

#endif
