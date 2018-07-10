/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 20:50:26 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 22:35:45 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"
#include <iostream>

int main(void) {
	{
		Intern idiotOne;
		Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
		Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
		OfficeBlock ob;
		ob.setIntern(&idiotOne);
		ob.setSigner(&bob);
		ob.setExecutor(&hermes);
		try
		{
			ob.doBureaucracy("mutant pig termination", "Pigley");
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		Intern idiotOne;
		Bureaucrat hermes = Bureaucrat("Hermes Conrad", 1);
		Bureaucrat bob = Bureaucrat("Bobby Bobson", 1);
		OfficeBlock ob;
		ob.setIntern(&idiotOne);
		ob.setSigner(&bob);
		ob.setExecutor(&hermes);
		try
		{
			ob.doBureaucracy("PresidentialPardonForm", "Pigley");
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << '\n';
		}
	}


	return 0;
}
