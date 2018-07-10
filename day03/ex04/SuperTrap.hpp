/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 01:49:18 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 14:28:54 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: protected FragTrap, protected NinjaTrap {
	private:
		SuperTrap ();

	public:
		SuperTrap (std::string name = "Default");
		SuperTrap (SuperTrap const & src);
		virtual ~SuperTrap (void);
		SuperTrap & operator=(SuperTrap const & rhs);

		void meleeAttack(std::string const &target);
		void rangedAttack(const std::string &target);

		void vaulthunter_dot_exe(std::string const & target);
		void ninjaShoebox(FragTrap &fragtrap);
		void ninjaShoebox(ScavTrap &scavtrap);
		void ninjaShoebox(NinjaTrap &ninjatrap);

};
