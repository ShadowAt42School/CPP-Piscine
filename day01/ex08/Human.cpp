/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:31:20 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 19:45:19 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(const std::string &target) {
	std::cout << "Sporstman meleed" << target << '\n';
}
void Human::rangedAttack(const std::string &target) {
	std::cout << "....." << target << '\n';
}
void Human::intimidatingShout(const std::string &target) {
	std::cout << "Dad" << target << '\n';
}

void Human::action(const std::string &action_name, const std::string &target) {
	static Action funcs[3] = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};
	static std::string actionStr[3] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};

	for (size_t i = 0; i < 3; i++)
		if (!actionStr[i].compare(action_name))
			(this->*(funcs[i]))(target);
}
