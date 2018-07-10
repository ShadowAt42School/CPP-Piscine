/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 13:54:38 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{
private:
	NinjaTrap ();

public:
	NinjaTrap (std::string name = "Default");
	NinjaTrap (NinjaTrap const & src);
	virtual ~NinjaTrap (void);
	NinjaTrap & operator=(NinjaTrap const & rhs);

	void ninjaShoebox(FragTrap &fragtrap);
	void ninjaShoebox(ScavTrap &scavtrap);
	void ninjaShoebox(NinjaTrap &ninjatrap);
};

#endif
