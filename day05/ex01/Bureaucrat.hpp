/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 19:13:40 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 19:55:52 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat {
	private:
		const std::string name;
		int grade;
		Bureaucrat();

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		virtual ~Bureaucrat ();

		void setGrade(int grade);
		std::string getName(void) const;
		int getGrade(void) const;

		Bureaucrat & operator=(Bureaucrat const & rhs);

		void increment(int);
		void decrement(int);
		void signForm(Form *) const;


		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "GradeTooHighException: Value of grade is too higg. It has to be between 1 (highest) and 150 (lowest)\n";
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "GradeTooLowException: Value of grade is too low. It has to be between 1 (highest) and 150 (lowest)\n";
				}
		};
		class GradeOutOfRangeException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return "GradeOutOfRangeException: Value of grade has to be between 1 (highest) and 150 (lowest)\n";
				}
		};
};

std::ostream & operator<<(std::ostream&, Bureaucrat const &);

#endif
