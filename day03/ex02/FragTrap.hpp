/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:55 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 13:41:16 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:
	FragTrap ();

public:
	FragTrap (std::string name = "Default");
	FragTrap (FragTrap const & src);
	virtual ~FragTrap (void);
	FragTrap & operator=(FragTrap const & rhs);

	void vaulthunter_dot_exe(std::string const & target);
};

#endif
