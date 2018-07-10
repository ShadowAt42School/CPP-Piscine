/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:12:43 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/04 21:17:59 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A() {
}
A::A(A const & src) {
	*this = src;
	return;
}
A::~A() {
}
A & A::operator=(A const & src) {
	if (this != &src)
		return *this;
	return *this;
}
