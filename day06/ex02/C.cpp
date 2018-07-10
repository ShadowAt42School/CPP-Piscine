/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:13:19 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/04 21:18:31 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C() {
}
C::C(C const & src) {
	*this = src;
	return;
}
C::~C() {
}
C & C::operator=(C const & src) {
	if (this != &src)
		return *this;
	return *this;
}
