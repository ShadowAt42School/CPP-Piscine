/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:54 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 14:40:04 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
	FragTrap fragtrap("Millenial");
	fragtrap.vaulthunter_dot_exe("snipper");
	fragtrap.vaulthunter_dot_exe("snipper");
	fragtrap.vaulthunter_dot_exe("snipper");
	fragtrap.beRepaired(75);
	fragtrap.vaulthunter_dot_exe("snipper");
	fragtrap.vaulthunter_dot_exe("snipper");
	fragtrap.vaulthunter_dot_exe("snipper");
	fragtrap.vaulthunter_dot_exe("snipper");
	fragtrap.vaulthunter_dot_exe("snipper");
	fragtrap.takeDamage(40);
	fragtrap.beRepaired(20);
	std::cout << "\n\n\n";

	ScavTrap scavtrap("Mingled");
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.challengeNewcomer();
	scavtrap.meleeAttack("contestant 1");
	scavtrap.rangedAttack("contestant 1");
	scavtrap.sourcererAttack("contestant 1");
	scavtrap.screamAttack("contestant 1");
	scavtrap.poisonAttack("contestant 1");
	std::cout << "\n\n\n";

	NinjaTrap ninjatrap("Ninjaaaaa");
	ninjatrap.ninjaShoebox(fragtrap);
	std::cout << "\n";
	ninjatrap.ninjaShoebox(scavtrap);
	std::cout << "\n";
	ninjatrap.ninjaShoebox(ninjatrap);

	SuperTrap supertrap("SuperDuper");
	supertrap.vaulthunter_dot_exe("Angle");
	supertrap.ninjaShoebox(fragtrap);
	std::cout << "\n";
	supertrap.ninjaShoebox(scavtrap);
	std::cout << "\n";
	supertrap.ninjaShoebox(ninjatrap);
	return 0;
}
