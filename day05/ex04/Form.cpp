/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 18:49:43 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 22:37:53 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int reqSignGrade, int reqExecGrade) :
	name(name),
	reqSignGrade(reqSignGrade),
	reqExecGrade(reqExecGrade) {
		if (this->reqSignGrade > 150 || this->reqExecGrade > 150 ||
			this->reqSignGrade < 1 || this->reqExecGrade < 1 )
			throw Form::GradeOutOfRangeException();
	this->isSigned = false;
	return;
}

Form::Form(Form const & src) :
	name(src.getName()),
	reqSignGrade(src.getReqSignGrade()),
	reqExecGrade(src.getReqExecGrade()) {
	if (this->reqSignGrade > 150 || this->reqExecGrade > 150 ||
		this->reqSignGrade < 1 || this->reqExecGrade < 1 )
		throw Form::GradeOutOfRangeException();
	this->isSigned = src.getIsSigned();
	return;
}
Form::~Form() {

}

std::string Form::getName(void) const{	return this->name;	}
int Form::getReqSignGrade(void) const{	return this->reqSignGrade;	}
int Form::getReqExecGrade(void) const{	return this->reqExecGrade;	}
bool Form::getIsSigned(void) const{	return this->isSigned;	}

Form & Form::operator=(Form const & rhs) {
	if (this != &rhs)
		this->isSigned = rhs.getIsSigned();
	return *this;
}

void Form::beSigned(Bureaucrat const * bureaucrat) {
	if (bureaucrat->getGrade() > this->reqSignGrade)
		throw Form::GradeTooLowException();
	this->isSigned = true;
}

std::ostream & operator<<(std::ostream& o, Form const & form) {
	o << "Form: " << form.getName() << ": is " << (form.getIsSigned() ? "signed" : "not signed") << ".\n";
	o << "Grade to sign required: " << form.getReqSignGrade() << " and " << form.getReqExecGrade() << " grade required to execute.\n";
	return o;
}
