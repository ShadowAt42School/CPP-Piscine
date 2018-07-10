/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 17:32:52 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 19:51:36 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(int argc, char const *argv[]) {
	if (argc == 1) {
		ZombieHorde zombieHorde(10);
		zombieHorde.announce();
	}
	else {
		ZombieHorde zombieHorde(std::atoi((char*)argv[1]));
		zombieHorde.announce();
	}
	return 0;
}
