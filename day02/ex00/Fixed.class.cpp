/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:08:22 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/28 22:47:19 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() {
	this->val = 0;
	std::cout << "Default constructor called" << '\n';
	return;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << '\n';
	*this = src;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << '\n';
	return;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation called" << '\n';
	if (this != &rhs)
		this->val = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << '\n';
	return this->val;
}

void Fixed::setRawBits(const int raw) {
	this->val = raw;
}
