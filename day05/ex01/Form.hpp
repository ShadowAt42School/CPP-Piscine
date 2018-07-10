/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 18:49:37 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 20:01:06 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form {
private:
	std::string const name;
	bool isSigned;
	int const reqSignGrade;
	int const reqExecGrade;

	Form();


public:
	Form (std::string, int, int);
	Form (Form const & src);
	virtual ~Form ();

	std::string getName(void) const;
	int getReqSignGrade(void) const;
	int getReqExecGrade(void) const;
	bool getIsSigned(void) const;

	Form & operator=(Form const & rhs);

	void beSigned(Bureaucrat const *);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "GradeTooHighException: Form Grade value is too high. It has to be between 1 (highest) and 150 (lowest)\n";
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "GradeTooLowException: Bureaucrat grade is too low.\n";			}
	};
	class GradeOutOfRangeException : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "GradeOutOfRangeException: Form Grade value is out of range. It has to be between 1 (highest) and 150 (lowest)\n";
			}
	};
};

std::ostream & operator<<(std::ostream&, Form const &);

#endif
