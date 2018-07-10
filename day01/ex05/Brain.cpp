/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 21:40:15 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/27 17:09:19 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream> //for std::stringstream

Brain::Brain() {
	std::cout << "Brain was constructed" << '\n';
}

std::string Brain::identify() const{
	std::ostringstream address;
	address << (const void *)this;
	return std::string(address.str());
}

Brain::~Brain() {
	std::cout << "Brain was destructed" << '\n';
}
