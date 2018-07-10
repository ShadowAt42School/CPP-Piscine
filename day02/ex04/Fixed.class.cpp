/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:08:22 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/28 22:19:52 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed() {
	this->val = 0;
	return;
}
Fixed::Fixed (int const val) {
	this->val = val * (1 << this->fract);
	return;
}
Fixed::Fixed (float const val) {
	this->val = std::round(val * (1 << this->fract));
	return;
}
Fixed::Fixed(Fixed const & src) {
	*this = src;
	return;
}
Fixed::~Fixed(void) {
	return;
}

Fixed & Fixed::operator=(Fixed const &rhs) {
	if (this != &rhs)
		this->val = rhs.getVal();
	return *this;
}

/**
* Comparison
*/
bool Fixed::operator>(Fixed const &rhs) {
	return this->val > rhs.getVal();
}
bool Fixed::operator<(Fixed const &rhs) {
	return this->val < rhs.getVal();
}
bool Fixed::operator>=(Fixed const &rhs) {
	return this->val >= rhs.getVal();
}
bool Fixed::operator<=(Fixed const &rhs) {
	return this->val <= rhs.getVal();
}
bool Fixed::operator==(Fixed const &rhs) {
	return this->val == rhs.getVal();
}
bool Fixed::operator!=(Fixed const &rhs) {
	return this->val != rhs.getVal();
}

/**
* Math
*/
Fixed &Fixed::operator+(Fixed const & rhs) {
	*this += rhs;
	return *this;
}
Fixed &Fixed::operator-(Fixed const & rhs) {
	*this -= rhs;
	return *this;
}
Fixed &Fixed::operator/(Fixed const & rhs) {
	*this /= rhs;
	return *this;
}
Fixed &Fixed::operator*(Fixed const & rhs) {
	*this *= rhs;
	return *this;
}

/**
* Math and Equal
*/
Fixed &Fixed::operator+=(Fixed const & rhs) {
	this->setBits(this->toFloat() + rhs.toFloat());
	return *this;
}
Fixed &Fixed::operator-=(Fixed const & rhs) {
	this->setBits(this->toFloat() - rhs.toFloat());
	return *this;
}
Fixed &Fixed::operator*=(Fixed const & rhs) {
	this->setBits(this->toFloat() * rhs.toFloat());
	return *this;
}
Fixed &Fixed::operator/=(Fixed const & rhs) {
	this->setBits(this->toFloat() / rhs.toFloat());
	return *this;
}

/**
* Increments
*/
Fixed &Fixed::operator++() {
	this->val += 1;
	return *this;
}
Fixed Fixed::operator++(int) {
	Fixed copy(this->toFloat());
	this->val += 1;
	return copy;
}
Fixed &Fixed::operator--() {
	this->val -= 1;
	return *this;
}
Fixed Fixed::operator--(int) {
	Fixed copy(this->toFloat());
	this->val -= 1;
	return copy;
}

/**
* Operational Functions
*/
int Fixed::getVal() const {
	return this->val;
}
int Fixed::getRawBits() const {
	return this->val;
}
void Fixed::setRawBits(const int raw) {
	this->val = raw;
}
void Fixed::setBits(const int raw) {
	this->val = raw * (1 << this->fract);
}
void Fixed::setBits(const float raw) {
	this->val = std::round(raw * (1 << this->fract));
}
float Fixed::toFloat( void ) const {
	return (float)this->val / (1 << this->fract);
}
int Fixed::toInt() const{
	return this->val / (1 << this->fract);
}

/**
* min and max
*/
Fixed const & Fixed::min(Fixed const & a, Fixed const & b) {
	if (a.getRawBits() > b.getRawBits())
		return b;
	if (a.getRawBits() < b.getRawBits())
		return a;
	return a;
}
int const & Fixed::min(int const & a, int const & b) {
	if (a > b)
		return b;
	if (a < b)
		return a;
	return a;
}
Fixed const & Fixed::max(Fixed const & a, Fixed const & b) {
	if (a.getRawBits() > b.getRawBits())
		return a;
	if (a.getRawBits() < b.getRawBits())
		return b;
	return a;
}
int const & Fixed::max(int const & a, int const & b) {
	if (a > b)
		return a;
	if (a < b)
		return b;
	return a;
}

std::ostream & operator<<(std::ostream& o, Fixed const & fixed) {
	o << fixed.toFloat();
	return o;
}
