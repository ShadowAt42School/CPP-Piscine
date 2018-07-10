/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:50:26 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 18:46:17 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main(void) {
	// {
	// 	try {
	// 		Bureaucrat b1("Test", 160);
	// 		Bureaucrat b2("Test", 100);
	// 		Bureaucrat b3("Test", 0);
    //
	// 		std::cout << "B1 " << b1;
	// 		std::cout << "B2 " << b2;
	// 		std::cout << "B3 " << b3;
	// 	} catch (std::exception & e) {
	// 		std::cout << e.what();
	// 	}
	// 	std::cout << "And I am after catch execution :)\n";
	// }
	// {
	// 	try {
	// 		Bureaucrat b2("Test", 100);
	// 		std::cout << "B2 " << b2;
	// 		std::cout << "B2 increment ";
	// 		b2.increment(10);
	// 		std::cout << b2;
	// 		std::cout << "B2 decrement ";
	// 		b2.decrement(20);
	// 		std::cout << b2;
	// 		std::cout << "B2 decrement overflow ";
	// 		b2.decrement(1000);
	// 	} catch (std::exception & e) {
	// 		std::cout << e.what();
	// 	}
	// 	std::cout << "And I am after catch execution :)\n";
	// }
	// {
	// 	try {
	// 		Bureaucrat b2("Test", 100);
	// 		std::cout << "B2 ";
	// 		std::cout << "B2 increment ";
	// 		b2.increment(10);
	// 		std::cout << b2;
	// 		std::cout << "B2 decrement ";
	// 		b2.decrement(20);
	// 		std::cout << b2;
	// 		std::cout << "B2 increment overflow ";
	// 		b2.increment(1000);
	// 	} catch (std::exception & e) {
	// 		std::cout << e.what();
	// 	}
	// 	std::cout << "And I am after catch execution :)\n";
	// }
	{
		try {
			Bureaucrat b2("TestB4", 100);
			Bureaucrat b3(b2);
			Bureaucrat b4 = b3;
			std::cout << "B2 " << b2 << "B3 " << b3 << "B4 " << b4;
			std::cout << "B2 increment ";
			b2.increment(10);
			std::cout << b2;
			std::cout << "B2 decrement ";
			b2.decrement(20);
			std::cout << b2;
			std::cout << "B2 increment overflow ";
			b2.increment(1000);
		} catch (std::exception & e) {
			std::cout << e.what();
		}
		std::cout << "And I am after catch execution :)\n";
	}
	return 0;
}
