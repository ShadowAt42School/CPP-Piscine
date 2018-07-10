/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:54 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 13:59:21 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	return 0;
}
