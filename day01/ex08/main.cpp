/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:47:08 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 18:54:53 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main() {
	Human human;

	human.action("meleeAttack", " that fat");
	human.action("rangedAttack", " someones heart O_o");
	human.action("intimidatingShout", " something nasty probably");
	return 0;
}
