/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:33:49 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/25 21:50:03 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "structs.h"
#include "Entry.class.hpp"

class PhoneBook {
	private:
		Entry	entry[8];
		int		count;

	public:
		t_search	searchl[8];
		s_nentry	item;
		PhoneBook(void);
		void addEntry(
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
		void	addEntry(t_nentry &entry);
		void	getEntry(int index);
		int		getCount();
		void	search();
		void	deleteEntry();
};

#endif
