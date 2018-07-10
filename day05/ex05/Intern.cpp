/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 21:26:01 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 22:18:34 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern () {}
Intern::Intern (Intern const & src) {
	*this = src;
	return;
}
Intern::~Intern () {}

Intern & Intern::operator=(Intern const & rhs) {
	if (this != &rhs)
		return *this;
	return *this;

}

Form * Intern::ShrubberyCreationFormCreate(std::string target) const {	return new ShrubberyCreationForm(target);	}
Form * Intern::PresidentialPardonFormCreate(std::string target) const {	return new PresidentialPardonForm(target);	}
Form * Intern::RobotomyRequestFormCreate(std::string target) const {	return new RobotomyRequestForm(target);	}

Form * Intern::makeForm(std::string form, std::string target) {
	std::string formsStr[3] = {
		"ShrubberyCreationForm",
		"PresidentialPardonForm",
		"RobotomyRequestForm"
	};
	formss forms[3] = {
		&Intern::ShrubberyCreationFormCreate,
		&Intern::PresidentialPardonFormCreate,
		&Intern::RobotomyRequestFormCreate
	};
	for (int i = 0; i < 3; i++) {
		if (form != formsStr[i])
			continue;
		Form * form_create = (this->*forms[i])(target);
		std::cout << "Intern creates " << *form_create << '\n';
		return form_create;
	}
	throw Intern::FormNotFound();
}
