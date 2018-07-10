/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:50:26 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 22:18:23 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int main(void) {
	{
		try {
			Intern someRandomIntern;
			Form* rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << "And I am after catch execution :)\n";
	}
	{
		try {
			Intern someRandomIntern;
			Form* rrf;
			rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << "And I am after catch execution :)\n";
	}
	{
		try {
			Intern someRandomIntern;
			Form* rrf;
			rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << "And I am after catch execution :)\n";
	}
	{
		try {
			Intern someRandomIntern;
			Form* rrf;
			rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << "And I am after catch execution :)\n";
	}
	return 0;
}
