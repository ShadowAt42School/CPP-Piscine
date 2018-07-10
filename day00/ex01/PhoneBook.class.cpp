/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:53:10 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/25 20:56:47 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	this->count = 0;
}

int	PhoneBook::getCount() {
	return this->count;
}

void PhoneBook::addEntry(t_nentry &entry) {
	this->entry[this->count].saveEntry(entry);
	this->count++;
	return;
}

void PhoneBook::addEntry(
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
	this->entry[this->count].saveEntry(
		fname,
		lname,
		nickname,
		login,
		pstaddr,
		email,
		phnumber,
		bday,
		fmeal,
		undcover,
		secret
	);
	this->count++;
	return;
}

/**
*	Better practise would be not using public variable, but to prepare allocated
* struct for number of results and return that struct. But due to limitations, this is as close as I can get :)
* Implementation
*	t_search *search = malloc(sizeof(t_search) * this->count);
*	and then while loop, but instead of this->searchl[counter] => search[counter]
*	and return search at the end.
*/
void PhoneBook::search() {
	int	counter = 0;

	while (counter < this->count) {
		std::string fname;
		std::string lname;
		std::string nickname;

		fname = this->entry[counter].getFName();
		lname = this->entry[counter].getLName();
		nickname = this->entry[counter].getNickname();

		this->searchl[counter].index = counter;

		if (fname.length() > 9) {
			this->searchl[counter].fname = fname.substr(0, 9);
			this->searchl[counter].fname += ".";
		} else {
			this->searchl[counter].fname = fname;
		}

		if (lname.length() > 9) {
			this->searchl[counter].lname = lname.substr(0, 9);
			this->searchl[counter].lname += ".";
		} else {
			this->searchl[counter].lname = lname;
		}

		if (nickname.length() > 9) {
			this->searchl[counter].nickname = nickname.substr(0, 9);
			this->searchl[counter].nickname += ".";
		} else {
			this->searchl[counter].nickname = nickname;
		}
		counter++;
	}
	return;
}

/**
*	Better practise would be not using public variable, but to prepare allocated
* struct for number of results and return that struct. But due to limitations, this is as close as I can get :)
* Implementation
*	t_search *search = malloc(sizeof(t_search) * this->count);
*	and then while loop, but instead of this->searchl[counter] => search[counter]
*	and return search at the end.
*/
void PhoneBook::getEntry(int index) {
	this->item.fname = this->entry[index].getFName();
	this->item.lname = this->entry[index].getLName();
	this->item.nickname = this->entry[index].getNickname();
	this->item.login = this->entry[index].getLogin();
	this->item.pstaddr = this->entry[index].getPstaddr();
	this->item.email = this->entry[index].getEmail();
	this->item.phnumber = this->entry[index].getPhnumber();
	this->item.bday = this->entry[index].getBDay();
	this->item.fmeal = this->entry[index].getFMeal();
	this->item.undcover = this->entry[index].getUndCover();
	this->item.secret = this->entry[index].getSecret();
	return;
}

void PhoneBook::deleteEntry() {
	this->count--;
	return;
}
