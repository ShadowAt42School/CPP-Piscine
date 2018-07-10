/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:16:54 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/29 13:24:46 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	return 0;
}
