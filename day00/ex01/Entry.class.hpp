/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entry.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:38:41 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/25 21:47:10 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTRY_CLASS_H
# define ENTRY_CLASS_H

#include "structs.h"

class Entry {
	private:
		t_nentry	entry;

	public:
		Entry ();
		Entry (t_nentry &entry);
		void saveEntry(t_nentry &entry);
		void saveEntry(
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
		);
		std::string getFName();
		std::string getLName();
		std::string getNickname();
		std::string getLogin();
		std::string getPstaddr();
		std::string getEmail();
		std::string getPhnumber();
		std::string getBDay();
		std::string getFMeal();
		std::string getUndCover();
		std::string getSecret();
	};

#endif
