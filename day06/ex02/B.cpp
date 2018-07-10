/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:13:06 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/04 21:18:32 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B() {
}
B::B(B const & src) {
	*this = src;
	return;
}
B::~B() {
}
B & B::operator=(B const & src) {
	if (this != &src)
		return *this;
	return *this;
}
