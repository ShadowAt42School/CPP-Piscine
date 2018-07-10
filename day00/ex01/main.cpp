/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:21:22 by maghayev          #+#    #+#             */
/*   Updated: 2018/06/26 13:44:32 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"
#include "main.h"

int	main() {
	char		action[100];
	PhoneBook	phonebook;

	while (1) {
		std::cout << "Commands:" << '\n';
		std::cout << "ADD - up 8 chracters, creates new contact." << '\n';
		std::cout << "SEARCH - allows search and detail look at selected contact." << '\n';
		std::cout << "DELETE - deletes last contact entry." << '\n';
		std::cout << "EXIT" << "\n\n";
		std::cout << "All commands support lower case syntax as well." << '\n';
		std::cout << "Enter a command please: ";
		std::cin >> action;
		if (!std::strcmp(action, "ADD") || !std::strcmp(action, "add")) {
			if (phonebook.getCount() == ENTRIES) {
				std::cout << "Sorry, Phonebook is full..." << '\n';
				std::cout << "Do you wish to re-write last element? (y/n)" << '\n';
				std::string resp;
				std::cin >> resp;
				if (!resp.compare("y")) {
					phonebook.deleteEntry();
				} else {
					continue;
				}
			}
			t_nentry	nentry;

			// To fix initialization bug
			std::getline(std::cin, nentry.fname);
			std::cout << "Enter your FIRST name: ";
			std::getline(std::cin, nentry.fname);

			std::cout << "Enter your LAST name: ";
			std::getline(std::cin, nentry.lname);

			std::cout << "Enter your nickname: ";
			std::getline(std::cin, nentry.nickname);

			std::cout << "Enter your login: ";
			std::getline(std::cin, nentry.login);

			std::cout << "Enter your postal address: ";
			std::getline(std::cin, nentry.pstaddr);

			std::cout << "Enter your email: ";
			std::getline(std::cin, nentry.email);

			std::cout << "Enter your phone number: ";
			std::getline(std::cin, nentry.phnumber);

			std::cout << "Enter your birthday: ";
			std::getline(std::cin, nentry.bday);

			std::cout << "Enter your favourite meal: ";
			std::getline(std::cin, nentry.fmeal);

			std::cout << "Enter your unverware color: ";
			std::getline(std::cin, nentry.undcover);

			std::cout << "Enter your dirty dirstyyyy secret :): ";
			std::getline(std::cin, nentry.secret);
			std::cout << "\n\n";
			phonebook.addEntry(nentry);
		} else
		if (!std::strcmp(action, "SEARCH") || !std::strcmp(action, "search")) {
			phonebook.search();
			print_search(phonebook);
			if (phonebook.getCount() == 0) {
				std::cout << "No entires, please use ADD command to create new entry." << "\n\n";
				continue;
			}
			std::cout << "Select index of entry you would like to review:" << '\n';
			char index[1];
			std::cin >> index;
			int indexi = std::atoi(index);
			if (indexi < 1 || indexi > phonebook.getCount()) {
				std::cout << "Wrong Index!\n\n";
				continue;
			}
			print_entry(phonebook, indexi - 1);
		} else
		if (!std::strcmp(action, "DELETE") || !std::strcmp(action, "delete")) {
			std::cout << "This will delete last element at the moment." << '\n';
			std::cout << "Do you wish to re-write last element? (y/n)" << '\n';
			std::string resp;
			std::cin >> resp;
			if (!resp.compare("y")) {
				phonebook.deleteEntry();
			} else {
				continue;
			}
		} else
		if (!std::strcmp(action, "EXIT") || !std::strcmp(action, "exit")) {
			std::cout << "Good Bye! All contacts are lost :()" << '\n';
			return 0;
		} else {
			std::cout << "Wrong Input command, please try again." << '\n';
		}
	}
	return 0;
}

void	print_search(PhoneBook &phonebook) {
	int	counter = 1;
	std::setw(10);

	std::cout << "\033[1;31mTable of Contents:\033[0m" << '\n';
	while (counter <= phonebook.getCount()) {
		std::cout	<< std::right << std::setw(10)
					<< counter << "|"
					<< std::right << std::setw(10)
		 			<< phonebook.searchl[counter - 1].fname << "|"
					<< std::right << std::setw(10)
		 			<< phonebook.searchl[counter - 1].lname << "|"
					<< std::right << std::setw(10)
		 			<< phonebook.searchl[counter - 1].nickname << std::endl;
		counter++;
	}
}

void	print_entry(PhoneBook &phonebook, int index) {
	phonebook.getEntry(index);
	std::cout << "First Name: " << phonebook.item.fname << '\n';
	std::cout << "Last Name: " << phonebook.item.lname << '\n';
	std::cout << "Nickname: " << phonebook.item.nickname << '\n';
	std::cout << "Login: " << phonebook.item.login << '\n';
	std::cout << "Postal Address: " << phonebook.item.pstaddr << '\n';
	std::cout << "Email: " << phonebook.item.email << '\n';
	std::cout << "Phone Num.: " << phonebook.item.phnumber << '\n';
	std::cout << "Birday: " << phonebook.item.bday << '\n';
	std::cout << "Favourite Meal: " << phonebook.item.fmeal << '\n';
	std::cout << "Underwear Color -_-: " << phonebook.item.undcover << '\n';
	std::cout << "Dirty Secret o_O: " << phonebook.item.secret << "\n\n";
}
