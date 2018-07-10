/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:46:34 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 22:40:14 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	std::cout << "Human was created" << '\n';
}

const Brain &Human::getBrain() {
	return this->brain;
}

std::string Human::identify() {
	return this->getBrain().identify();

}

Human::~Human() {
	std::cout << "Human was destroyed" << '\n';
}
