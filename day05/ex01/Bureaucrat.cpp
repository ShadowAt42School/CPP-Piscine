/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 19:13:40 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 21:24:40 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	if (grade < 1 || grade > 150)
		throw Bureaucrat::GradeOutOfRangeException();
	this->grade = grade;
	return ;
}
Bureaucrat::Bureaucrat (Bureaucrat const & src) : name(src.getName()) {
	std::cout << "/* message */" << '\n';
	*this = src;
	return;
}
Bureaucrat::~Bureaucrat() {}

void Bureaucrat::setGrade(int grade) {
	this->grade = grade;
	if (this->grade < 1 || this->grade > 150)
		throw Bureaucrat::GradeOutOfRangeException();
}

std::string Bureaucrat::getName(void) const {	return this->name;	}
int Bureaucrat::getGrade(void) const {	return this->grade;	}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {
	if (this != &rhs) {
		this->grade = rhs.getGrade();
		if (this->grade < 1 || this->grade > 150)
			throw Bureaucrat::GradeOutOfRangeException();
	}
	return *this;
}

void Bureaucrat::increment(int val) {
	if (this->grade + val > 150) throw Bureaucrat::GradeTooLowException();
	this->grade += val;
}
void Bureaucrat::decrement(int val) {
	if (this->grade + val < 1) throw Bureaucrat::GradeTooHighException();
	this->grade += val;
}

void Bureaucrat::signForm(Form * form) const {
	try {
		form->beSigned(this);
	} catch (std::exception & e) {
		std::cout << this->name << "cannot sign the " << form->getName() <<
			".\nDue to the fact that " << e.what() << '\n';
		return;
	}
	std::cout << this->name << " signs the " << form->getName() << '\n';
}

std::ostream & operator<<(std::ostream& o, Bureaucrat const & bureaucrat) {
	o << bureaucrat.getName() << " is of " << bureaucrat.getGrade() << " grade.\n";
	return o;
}
