/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:17:22 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 21:16:38 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form ("PresidentialPardonForm", 25, 5) {
	this->target = target;
	return;
}
PresidentialPardonForm::PresidentialPardonForm (PresidentialPardonForm const & src) : Form ("PresidentialPardonForm", 25, 5) {
	*this = src;
	return;
}
PresidentialPardonForm::~PresidentialPardonForm () {
}

std::string PresidentialPardonForm::getTarget(void) const {	return this->target;	}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	if (this != &rhs)
		this->target = rhs.getTarget();
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned())
		throw PresidentialPardonForm::FormSignatureRequired();
	if (executor.getGrade() > this->getReqExecGrade())
		throw PresidentialPardonForm::GradeTooLowException();
	std::cout << "Tells us " << this->target << " has been pardoned by Zaphod Beeblebrox." << '\n';
	return;
}
