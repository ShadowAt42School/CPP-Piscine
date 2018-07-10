/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:21:24 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 21:16:29 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form ("RobotomyRequestForm", 72, 45) {
	this->target = target;
	srand(0);
	return;
}
RobotomyRequestForm::RobotomyRequestForm (RobotomyRequestForm const & src) : Form ("RobotomyRequestForm", 72, 45) {
	*this = src;
	return;
}
RobotomyRequestForm::~RobotomyRequestForm () {
}

std::string RobotomyRequestForm::getTarget(void) const {	return this->target;	}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	if (this != &rhs)
		this->target = rhs.getTarget();
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned())
		throw RobotomyRequestForm::FormSignatureRequired();
	if (executor.getGrade() > this->getReqExecGrade())
		throw RobotomyRequestForm::GradeTooLowException();
	std::cout << "Dzzzzzzzzzz... " << this->target << " has been robotomized " << (std::rand() % 2 ? "successfully" : " with horrible failures in system") << "." << '\n';
	return;
}
