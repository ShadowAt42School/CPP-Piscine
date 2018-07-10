/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 22:22:22 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 23:19:19 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock () {}
OfficeBlock::OfficeBlock (Intern* intern, Bureaucrat* signS, Bureaucrat* execE) {
	this->intern = intern;
	this->bureaucratSign = signS;
	this->bureaucratExec = execE;
	return;
}
OfficeBlock::~OfficeBlock () {}

void OfficeBlock::setIntern(Intern* intern) { this->intern = intern; }
void OfficeBlock::setSigner(Bureaucrat* signA) { this->bureaucratSign = signA; }
void OfficeBlock::setExecutor(Bureaucrat* execB) { this->bureaucratExec = execB; }
Intern * OfficeBlock::getIntern() const { return this->intern; }
Bureaucrat* OfficeBlock::getSigner() const { return this->bureaucratSign; }
Bureaucrat* OfficeBlock::getExecutor() const { return this->bureaucratExec; }

void OfficeBlock::doBureaucracy(std::string form_name, std::string target) {
	if (!this->intern)
		throw OfficeBlock::MissingIntern();
	if (!this->bureaucratSign || !this->bureaucratExec)
		throw OfficeBlock::MissingBureaucrat();
	try {
		Form * form = this->intern->makeForm(form_name, target);
		this->bureaucratSign->signForm(form);
		this->bureaucratSign->executeForm(*form);
	} catch (std::exception & e) {
		std::cout << "Error occured.\n" << e.what() << '\n';
		return;
	}

}
