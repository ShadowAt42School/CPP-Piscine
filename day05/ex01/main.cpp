/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:50:26 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 20:00:11 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void) {
	{
		try {
			Form *form1 = new Form("Consule", 160, 20);
			Bureaucrat b2("TestB4", 100);
			Bureaucrat b3(b2);
			Bureaucrat b4 = b3;
			std::cout << "Form1 " << *form1;
			std::cout << "B2 " << b2 << "B3 " << b3 << "B4 " << b4;
			std::cout << "B2 increment ";
			b2.increment(10);
			std::cout << b2;
			std::cout << "B2 decrement ";
			b2.decrement(20);
			std::cout << b2;
			b2.signForm(form1);
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << "And I am after catch execution :)\n";
	}
	{
		try {
			Form *form1 = new Form("Consule", 10, 20);
			Bureaucrat b2("TestB4", 100);
			Bureaucrat b3(b2);
			Bureaucrat b4 = b3;
			std::cout << "Form1 " << *form1;
			std::cout << "B2 " << b2 << "B3 " << b3 << "B4 " << b4;
			std::cout << "B2 increment ";
			b2.increment(10);
			std::cout << b2;
			std::cout << "B2 decrement ";
			b2.decrement(20);
			std::cout << b2;
			b2.signForm(form1);
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << "And I am after catch execution :)\n";
	}
	{
		try {
			Form *form1 = new Form("Consule", 130, 20);
			Bureaucrat b2("TestB4", 100);
			Bureaucrat b3(b2);
			Bureaucrat b4 = b3;
			std::cout << "Form1 " << *form1;
			std::cout << "B2 " << b2 << "B3 " << b3 << "B4 " << b4;
			std::cout << "B2 increment ";
			b2.increment(10);
			std::cout << b2;
			std::cout << "B2 decrement ";
			b2.decrement(20);
			std::cout << b2;
			b2.signForm(form1);
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << "And I am after catch execution :)\n";
	}
	return 0;
}
