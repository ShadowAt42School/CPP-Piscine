/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:50:26 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 21:22:10 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main(void) {
	{
		try {
			Form *form1 = new PresidentialPardonForm("Some old hug");
			Form *form2 = new RobotomyRequestForm("Some old hug");
			Form *form3 = new ShrubberyCreationForm("Some old hug");
			Bureaucrat b2("TestB4", 100);
			// std::cout << "Form1 " << *form1;
			// std::cout << "B2 " << b2;
			// std::cout << "B2 increment ";
			// b2.increment(10);
			// std::cout << b2;
			// std::cout << "B2 decrement ";
			// b2.decrement(20);
			// std::cout << b2;
			b2.signForm(form1);
			// b2.signForm(form2);
			// b2.signForm(form3);
			// b2.executeForm(*form1);
			// b2.executeForm(*form2);
			// b2.executeForm(*form3);
			delete form1;
			delete form2;
			delete form3;
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << "And I am after catch execution :)\n";
	}
	// {
	// 	try {
	// 		Form *form1 = new PresidentialPardonForm("Some old hug");
	// 		Form *form2 = new RobotomyRequestForm("Some old hug");
	// 		Form *form3 = new ShrubberyCreationForm("Some old hug");
	// 		Bureaucrat b2("TestB4", 1);
	// 		// std::cout << "Form1 " << *form1;
	// 		// std::cout << "B2 " << b2;
	// 		// std::cout << "B2 increment ";
	// 		// b2.increment(10);
	// 		// std::cout << b2;
	// 		// std::cout << "B2 decrement ";
	// 		// b2.decrement(20);
	// 		// std::cout << b2;
	// 		b2.signForm(form1);
	// 		b2.signForm(form2);
	// 		b2.signForm(form3);
	// 		b2.executeForm(*form1);
	// 		b2.executeForm(*form2);
	// 		b2.executeForm(*form3);
	// 		delete form1;
	// 		delete form2;
	// 		delete form3;
	// 	} catch (std::exception & e) {
	// 		std::cout << e.what();
	// 	}
	// 	std::cout << "And I am after catch execution :)\n";
	// }
	return 0;
}
