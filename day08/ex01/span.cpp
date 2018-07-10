/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:29:01 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/06 17:44:19 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(int n) : count(n) {}

Span::Span(Span const & src) {
	*this = src;
	return;
}

Span::~Span() {}

std::vector<int> & Span::getContainer() {	return this->container;	}
unsigned int Span::getCount() const {	return this->count;	}

Span & Span::operator=(const Span & rhs) {
	if (this != &rhs) {
		this->count = rhs.count;
		this->container = rhs.container;
	}
	return *this;
}

void Span::addNumber(int num) {
	if (this->container.size() == this->count)
		throw Span::OverflowElementsException();
	this->container.push_back(num);
	if (this->container.size() == 1)
		std::make_heap (this->container.begin(),this->container.end());
	else
		std::push_heap (this->container.begin(),this->container.end());
}

int Span::longestSpan(void) {
	if (this->container.empty() || this->container.size() == 1)
		throw Span::UnderSizeException();

	if (!std::is_sorted(this->container.begin(), this->container.end()))
		std::sort_heap (this->container.begin(),this->container.end());

	return *(std::next(this->container.end(), - 1)) - *this->container.begin();
}
int Span::shortestSpan(void) {
	if (this->container.empty() || this->container.size() == 1)
		throw Span::UnderSizeException();

	if (!std::is_sorted(this->container.begin(), this->container.end()))
		std::sort_heap (this->container.begin(),this->container.end());

	int res = INT_MAX;
	std::vector<int>::iterator cur;
	std::vector<int>::iterator next;
	for (cur = this->container.begin(); next != this->container.end(); cur++) {
		next = std::next(cur, 1);
		if (next != this->container.end() && (*next - *cur) < res)
			res = *next - *cur;
	}
	return res;
}

Span::OverflowElementsException::OverflowElementsException() {}
Span::OverflowElementsException::OverflowElementsException(Span::OverflowElementsException const & src) {
	static_cast<void>(src);
	return;
}
Span::OverflowElementsException::~OverflowElementsException() {}
const char * Span::OverflowElementsException::what() {	return "Trying to insert more elements than provided in constructor\n";	}

Span::UnderSizeException::UnderSizeException() {}
Span::UnderSizeException::UnderSizeException(Span::UnderSizeException const & src) {
	static_cast<void>(src);
	return;
}
Span::UnderSizeException::~UnderSizeException() {}
const char * Span::UnderSizeException::what() {	return "Array does not have eneough elements inserted.\n";	}

std::ostream & operator<< (std::ostream & o, Span & span) {
	if (!std::is_sorted(span.getContainer().begin(), span.getContainer().end()))
		std::sort_heap (span.getContainer().begin(),span.getContainer().end());
	std::vector<int>::iterator i = span.getContainer().begin();
	std::vector<int>::iterator ie = span.getContainer().end();
	for ( ; i != ie; i++) {
		o << *i << " ";
	}
	o << std::endl;
	return o;
}
