/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maghayev <maghayev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 21:25:57 by maghayev          #+#    #+#             */
/*   Updated: 2018/07/03 21:59:32 by maghayev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
class Intern {
private:

public:
	typedef Form* (Intern::*formss)(std::string) const;
	Intern ();
	Intern (Intern const &);
	virtual ~Intern ();

	Intern & operator=(Intern const & rhs);

	Form * makeForm(std::string, std::string);
	Form * ShrubberyCreationFormCreate(std::string) const;
	Form * PresidentialPardonFormCreate(std::string) const;
	Form * RobotomyRequestFormCreate(std::string) const;
	class FormNotFound : public std::exception {
		public:
			virtual const char *what() const throw() {
				return "FormNotFound: Provided Form is not existant.\n";			}
	};
};

#endif
