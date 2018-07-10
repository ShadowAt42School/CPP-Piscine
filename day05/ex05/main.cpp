/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:50:26 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 23:15:37 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>

int main(void) {
	CentralBureaucracy center;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob1 = Bureaucrat("Bobby Bobson", 1);
	Bureaucrat bob2 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob3 = Bureaucrat("Bobby Bobson", 1);
	Bureaucrat bob4 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob5 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob6 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob7 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob8 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob9 = Bureaucrat("Bobby Bobson", 1);
	Bureaucrat bob10 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob11 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob12 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob13 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob14 = Bureaucrat("Bobby Bobson", 1);
	Bureaucrat bob15 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob16 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob17 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob18 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob19 = Bureaucrat("Bobby Bobson", 1);
	Bureaucrat bob20 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob21 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob22 = Bureaucrat("Bobby Bobson", 123);
	Bureaucrat bob23 = Bureaucrat("Bobby Bobson", 1);
	static std::string formsStr[3] = {
		"ShrubberyCreationForm",
		"PresidentialPardonForm",
		"RobotomyRequestForm"
	};
	try
	{
		center.feedBureaucrat(&hermes);
		center.feedBureaucrat(&bob);
		center.feedBureaucrat(&bob1);
		center.feedBureaucrat(&bob2);
		center.feedBureaucrat(&bob3);
		center.feedBureaucrat(&bob4);
		center.feedBureaucrat(&bob5);
		center.feedBureaucrat(&bob6);
		center.feedBureaucrat(&bob7);
		center.feedBureaucrat(&bob8);
		center.feedBureaucrat(&bob9);
		center.feedBureaucrat(&bob10);
		center.feedBureaucrat(&bob11);
		center.feedBureaucrat(&bob12);
		center.feedBureaucrat(&bob13);
		center.feedBureaucrat(&bob14);
		center.feedBureaucrat(&bob15);
		center.feedBureaucrat(&bob16);
		center.feedBureaucrat(&bob17);
		center.feedBureaucrat(&bob18);
		center.feedBureaucrat(&bob19);
		center.feedBureaucrat(&bob20);
		center.feedBureaucrat(&bob21);
		center.feedBureaucrat(&bob22);
		center.feedBureaucrat(&bob23);
		for (size_t i = 0; i < 50; i++)
			center.queueUp("test");
	}
	catch (std::exception & e)
	{
		center.doBureaucracy();
	}
	return 0;
}
