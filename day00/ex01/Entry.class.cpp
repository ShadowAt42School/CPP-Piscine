/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entry.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:06:39 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/25 21:46:53 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Entry.class.hpp"

Entry::Entry(void) {
	std::memset(&this->entry, 0, sizeof(t_nentry));
}

Entry::Entry(t_nentry &entry) {
	this->entry.fname = entry.fname;
	this->entry.lname = entry.lname;
	this->entry.nickname = entry.nickname;
	this->entry.login = entry.login;
	this->entry.pstaddr = entry.pstaddr;
	this->entry.email = entry.email;
	this->entry.phnumber = entry.phnumber;
	this->entry.bday = entry.bday;
	this->entry.fmeal = entry.fmeal;
	this->entry.undcover = entry.undcover;
	this->entry.secret = entry.secret;
	return;
}

void Entry::saveEntry(
	std::string fname,
	std::string lname,
	std::string nickname,
	std::string login,
	std::string pstaddr,
	std::string email,
	std::string phnumber,
	std::string bday,
	std::string fmeal,
	std::string undcover,
	std::string secret
) {
	this->entry.fname = fname;
	this->entry.lname = lname;
	this->entry.nickname = nickname;
	this->entry.login = login;
	this->entry.pstaddr = pstaddr;
	this->entry.email = email;
	this->entry.phnumber = phnumber;
	this->entry.bday = bday;
	this->entry.fmeal = fmeal;
	this->entry.undcover = undcover;
	this->entry.secret = secret;
	return;
}

void Entry::saveEntry(t_nentry &entry) {
	this->entry.fname = entry.fname;
	this->entry.lname = entry.lname;
	this->entry.nickname = entry.nickname;
	this->entry.login = entry.login;
	this->entry.pstaddr = entry.pstaddr;
	this->entry.email = entry.email;
	this->entry.phnumber = entry.phnumber;
	this->entry.bday = entry.bday;
	this->entry.fmeal = entry.fmeal;
	this->entry.undcover = entry.undcover;
	this->entry.secret = entry.secret;
	return;
}

std::string Entry::getFName() {
	return this->entry.fname;
}
std::string Entry::getLName() {
	return this->entry.lname;
}
std::string Entry::getNickname() {
	return this->entry.nickname;
}
std::string Entry::getLogin() {
	return this->entry.login;
}
std::string Entry::getPstaddr() {
	return this->entry.pstaddr;
}
std::string Entry::getEmail() {
	return this->entry.email;
}
std::string Entry::getPhnumber() {
	return this->entry.phnumber;
}
std::string Entry::getBDay() {
	return this->entry.bday;
}
std::string Entry::getFMeal() {
	return this->entry.fmeal;
}
std::string Entry::getUndCover() {
	return this->entry.undcover;
}
std::string Entry::getSecret() {
	return this->entry.secret;
}
