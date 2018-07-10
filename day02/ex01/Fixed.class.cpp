/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:08:22 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/28 19:38:42 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() {
	this->val = 0;
	std::cout << "Default constructor called" << '\n';
	return;
}

Fixed::Fixed (int const val) {
	std::cout << "Int constructor called" << '\n';
	this->val = val * (1 << this->fract);
	return;
}
Fixed::Fixed (float const val) {
	std::cout << "Float constructor called" << '\n';
	this->val = std::round(val * (1 << this->fract));
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
		this->val = rhs.getVal();
	return *this;
}

int Fixed::getVal() const {
	return this->val;
}

int Fixed::getRawBits() const {
	return this->val;
}

void Fixed::setRawBits(const int raw) {
	this->val = raw;
}

float Fixed::toFloat( void ) const {
	return (float)this->val / (1 << this->fract);
}

int Fixed::toInt() const{
	return this->val / (1 << this->fract);
}

std::ostream & operator<<(std::ostream& o, Fixed const & fixed) {
	o << fixed.toFloat();
	return o;
}
