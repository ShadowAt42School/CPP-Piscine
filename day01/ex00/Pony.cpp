/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:30:08 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 23:19:07 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string greeting) {
	std::cout << "Hello, " << greeting << '\n';
}

Pony::~Pony() {
	std::cout << "Pony has been deleted" << '\n';
}

void ponyOnTheHeap(std::string greeting) {
	Pony *pony = new Pony(greeting);
	delete pony;
}

void ponyOnTheStack(std::string greeting) {
	Pony pony(greeting);
}
